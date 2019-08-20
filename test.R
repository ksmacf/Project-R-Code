library(tidyverse)
library(gridExtra)
library(dplyr)
library(xgboost)

test <- read.delim("genLots_data.txt", sep = ",")

test_rmv <- test %>% filter(Muon.PT != "0" | Electron.PT != "0") 
test_rmv$lepton.PT <- test_rmv$Electron.PT + test_rmv$Muon.PT
plot_MET <- ggplot(test_rmv, aes(x=MissingET.MET)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)
plot_lepPT <- ggplot(test_rmv, aes(x=lepton.PT)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)
plot_jet1 <- ggplot(test_rmv, aes(x=Jet.PT_1)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)

grid.arrange(plot_MET, plot_lepPT, plot_jet1, nrow =2)
