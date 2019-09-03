library(tidyverse)
library(gridExtra)
library(dplyr)
library(caret)

# Load the data of interest
test <- read.delim(file = "/home/user1/Desktop/Root files/run_4_data.txt", sep = ",")
# Remove Electrons and Muons so that we have ONE lepton in each decay
test_rmv <- test %>% 
  filter(Muon.PT_1 != "0" | Electron.PT_1 != "0") %>% # select non-zero values
  filter(Muon.PT_1 == 0 | Electron.PT_1 == 0) %>% # select zero values
  filter(Muon.PT_2 == 0, Electron.PT_2 == 0) # Select zero values in second order PTs
lepPT_check <- summary(test_rmv$Electron.PT_1==test_rmv$Muon.PT_1) # Check if PT1 for E and M are different at each entry

# Data wrangling with Leptons
test_rmv <- test_rmv %>%
  mutate(
    Lepton.PT = Electron.PT_1 + Muon.PT_1,
    Lepton.Eta = Electron.Eta_1 + Muon.Eta_1,
    Lepton.Phi = Electron.Phi_1 + Muon.Phi_1,
    Lepton.Type = as.numeric(replace(Electron.PT_1, Electron.PT_1 > 0, 1)) + # 1 for Electrons
      as.numeric(replace(Muon.PT_1, Muon.PT_1 > 0, 2)), # 2 for Muons
    Signal = rep(1,nrow(test_rmv))
  ) %>%
  select(-grep(pattern="^Electron|^Muon",colnames(test_rmv)))




# Plotting MET for the full set to do a check
plot <- ggplot(test, aes(x=MissingET.MET)) +
  geom_histogram(bins = 52) +
  xlim(0, 500)
bins <- ggplot_build(plot)$data[[1]]
write.table(bins$y, file = "/home/user1/Desktop/Root files/bins.txt", col.names = "MET", row.names = FALSE)

plot_MET <- ggplot(test_rmv, aes(x=MissingET.MET)) +
  geom_histogram(bins = 52) + # aes(y=..density..), 
  xlim(0, 500)
bins_MET <- ggplot_build(plot_MET)$data[[1]]
write.table(bins_MET$y, file = "/home/user1/Desktop/Root files/bins_MET.txt", col.names = "MET", row.names = FALSE)

plot_lepPT <- ggplot(test_rmv, aes(x=Lepton.PT)) +
  geom_histogram(aes(y=..density..), bins = 52) +
  xlim(0, 500)
bins_lepPT <- ggplot_build(plot_lepPT)$data[[1]]
write.table(bins_lepPT$y, file = "/home/user1/Desktop/Root files/bins_lepPT.txt", col.names = "lepPT", row.names = FALSE)

plot_jet1 <- ggplot(test_rmv, aes(x=Jet.PT_1)) +
  geom_histogram(aes(y=..density..), bins = 52) +
  xlim(0, 500)
bins_jet1 <- ggplot_build(plot_jet1)$data[[1]]
write.table(bins_jet1$y, file = "/home/user1/Desktop/Root files/bins_jet1.txt", col.names = "jet1", row.names = FALSE)

plot_jet2 <- ggplot(test_rmv, aes(x=Jet.PT_2)) +
  geom_histogram(aes(y=..density..), bins = 52) +
  xlim(0, 500)
bins_jet2 <- ggplot_build(plot_jet2)$data[[1]]
write.table(bins_jet2$y, file = "/home/user1/Desktop/Root files/bins_jet2.txt", col.names = "jet2", row.names = FALSE)

grid.arrange(plot_MET, plot_lepPT, plot_jet1, plot_jet2, nrow =2)