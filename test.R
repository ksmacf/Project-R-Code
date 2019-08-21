library(tidyverse)
library(gridExtra)
library(dplyr)
library(xgboost)

test <- read.delim(file = "BigData.txt", sep = ",")
#MET <- read.delim("MET")
#%lepPlusPT <- read.delim("lepPlusPT")
#lepMinusPT <- read.delim("lepMinusPT")
#Jet1PT <- read.delim("Jet1PT")

# Remove Electrons and Muons so that we have ONE lepton in each decay
test_rmv <- test %>% 
  filter(Muon.PT_1 != "0" | Electron.PT_1 != "0") %>% # select non-zero values
  filter(Muon.PT_1 == 0 | Electron.PT_1 == 0) %>% # select zero values
  filter(Muon.PT_2 == 0, Electron.PT_2 == 0) # Select zero values in second order PTs
lepPT_check <- summary(test_rmv$Electron.PT_1==test_rmv$Muon.PT_1) # Check if PT1 for E and M are different

test_rmv$lepton.PT <- test_rmv$Electron.PT + test_rmv$Muon.PT # Make a new variable to combine results as leptonPT


plot <- ggplot(test, aes(x=MissingET.MET)) +
  geom_histogram(aes(y=..density..), bins = 52) +
  xlim(0, 500)
check <- ggplot_build(plot)$data[[1]]
write.table(check$y*10, file = "/home/user1/Desktop/Root files/MET_R_test.txt", col.names = FALSE, row.names = FALSE)


plot_MET <- ggplot(test_rmv, aes(x=MissingET.MET)) +
  geom_histogram(aes(y=..density..), bins = 51) +
  xlim(0, 500)
check2 <- ggplot_build(plot_MET)$data[[1]]
write.table(check$y, file = "MET_R.txt", col.names = "MET", row.names = FALSE)

plot_lepPT <- ggplot(test_rmv, aes(x=lepton.PT)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)



plot_jet1 <- ggplot(test_rmv, aes(x=Jet.PT_1)) +
  geom_histogram(aes(y=..density..), bins = 50) +
  xlim(0, 500)

grid.arrange(plot_MET, plot_lepPT, plot_jet1, nrow =2)
