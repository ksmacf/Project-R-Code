#################### Code adapted from Di Cook's ETC3250 lectrue material ##########################
animation_FNvTP <- function(bases, filename, variable){
  #bases[,,1] <- matrix(c(1,0,0,1,0,0), ncol=2, byrow=TRUE)
  tour_path <- interpolate(bases, 0.1)
  d <- dim(tour_path)
  var_std <- variable #[order(as.data.frame(variable)$Signal_pred, decreasing = FALSE),] 
  # Remove the brackets when don't want to order
  var <- read_csv(filename) # enter filename
  
  # Put label on 
  var[var[,"Signal"]!=var[,"Signal_pred"], "Signal_pred"] <- 
    if_else(var[var[,"Signal"]!=var[,"Signal_pred"], "Signal_pred"]=="2", "FP", "FN")
  var[var[,"Signal"]==var[,"Signal_pred"], "Signal_pred"] <- 
    if_else(var[var[,"Signal"]==var[,"Signal_pred"], "Signal_pred"]=="0", "TN", "TP") 
  
  var <- var %>% select(-Signal) #%>% arrange(Signal_pred)
  mydat <- NULL; myaxes <- NULL
  
  for (i in 1:d[3]) {
    fp <- as.matrix(var_std[,-ncol(var_std)]) %*% matrix(tour_path[,,i], ncol=2)
    fp <- tourr::center(fp)
    entry <- matrix(1:nrow(var_std), ncol = 1)
    fp <- cbind(fp, entry)
    colnames(fp) <- c("d1", "d2", "Event_Number")
    mydat <- rbind(mydat, cbind(fp, rep(i, nrow(fp))))
    fa <- cbind(matrix(0, (ncol(var_std)-1), 2), matrix(tour_path[,,i], ncol=2))
    colnames(fa) <- c("origin1", "origin2", "d1", "d2") 
    myaxes <- rbind(myaxes, cbind(fa, rep(i, nrow(fa))))
  }
  
  colnames(mydat)[4] <- "indx"
  colnames(myaxes)[5] <- "indx"
  df <- as_tibble(mydat) %>% 
    mutate(Prediction = rep(var$Signal_pred, d[3]))
  dfaxes <- as_tibble(myaxes) %>%
    mutate(labels=rep(colnames(var[,-ncol(var)]), d[3]))
  numbers <- round(seq(-0.2, 0.2, 0.4/(ncol(var)-1)), 2) # do this to match dimencions in yloc
  dfaxes_mat <- dfaxes %>%
    mutate(xloc = rep(max(df$d1)+0.4, d[3]*(ncol(var)-1)), yloc=rep(numbers[-4], d[3]), 
           coef=paste(round(dfaxes$d1, 2), ", ", round(dfaxes$d2, 2))) #numbers[-4] due to extra entry
  
  
  FN <- subset(df, df[,"Prediction"]=="FN")
  TP <- subset(df, df[,"Prediction"]=="TP")
  p <- ggplot(data = dfaxes, aes(frame = indx)) +
    geom_segment(data=dfaxes, aes(x=d1/2-1.4, xend=origin1-1.4, 
                                  y=d2/2, yend=origin2), colour="grey70") +
    geom_text(data=dfaxes, aes(x=d1/2-1.4, y=d2/2, label=labels), colour="grey70") +
    geom_point(data=TP, 
               aes(x = d1, y = d2, colour = Prediction,
                   text=paste("Event Number:", TN$Event_Number)), 
               alpha = 1) +
    geom_point(data=FN, 
               aes(x = d1, y = d2, colour = Prediction,
                   text=paste("Event Number:", FP$Event_Number)), 
               alpha = 1) +   
    scale_colour_manual(values = c("red", "blue")) +
    theme_void() +
    coord_fixed() +
    theme(legend.position="right")
  
  pg <- ggplotly(p) %>%
    animation_opts(150, redraw = FALSE, transition=0) %>%
    layout(showlegend = T, yaxis = list(showgrid = F, showline = F),
           xaxis = list(scaleanchor = "y", scaleratio = 1, showgrid = F, showline =F))
  pg
  
}