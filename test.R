library(tidyverse)
library(dplyr)
library(xgboost)

test <- read.delim("genLots_data.txt", sep = ",")

test_rmv <- test %>% filter(Muon.PT != "0" | Electron.PT != "0") 
