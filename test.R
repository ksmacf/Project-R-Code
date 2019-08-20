library(tidyverse)
library(gridExtra)
library(dplyr)
library(xgboost)

test <- read.delim("genLots_data.txt", sep = ",")
MET <- read.delim("MET")
lepPlusPT <- read.delim("lepPlusPT")
lepMinusPT <- read.delim("lepMinusPT")
Jet1PT <- read.delim("Jet1PT")

test_rmv <- test %>% filter(Muon.PT != "0" | Electron.PT != "0") %>% filter(Muon.PT == 0 | Electron.PT == 0)
test_rmv$lepton.PT <- test_rmv$Electron.PT + test_rmv$Muon.PT

plot <- ggplot(test, aes(x=MissingET.MET)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)
check2 <- ggplot_build(plot)$data[[1]]
write.table(check2$y, file = "MET_R_test.txt", col.names = "MET", row.names = FALSE)


plot_MET <- ggplot(test_rmv, aes(x=MissingET.MET)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)
check <- ggplot_build(plot_MET)$data[[1]]
write.table(check$y, file = "MET_R.txt", col.names = "MET", row.names = FALSE)

plot_lepPT <- ggplot(test_rmv, aes(x=lepton.PT)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)



plot_jet1 <- ggplot(test_rmv, aes(x=Jet.PT_1)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)

grid.arrange(plot_MET, plot_lepPT, plot_jet1, nrow =2)
