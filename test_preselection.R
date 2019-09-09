library(tidyverse)
library(dplyr)

# Selection 1: Default values of Delphes card (check card)
pre1 <- read.delim(file = "/home/user1/Desktop/Root files/topDefSmol.txt", sep = ",")

# Remove Electrons and Muons so that we have ONE lepton in each decay
pre1_rmv <- pre1 %>% 
  filter(Muon.PT_1 != "0" | Electron.PT_1 != "0") %>% # select non-zero values
  filter(Muon.PT_1 == 0 | Electron.PT_1 == 0) %>% # select zero values
  filter(Muon.PT_2 == 0, Electron.PT_2 == 0) # Select zero values in second order PTs
lepPT_check <- summary(pre1_rmv$Electron.PT_1==pre1_rmv$Muon.PT_1) # Check if PT1 for E and M are different at each entry

# Data wrangling with Leptons
pre1_rmv <- pre1_rmv %>%
  mutate(
    Lepton.PT = Electron.PT_1 + Muon.PT_1,
    Lepton.Eta = Electron.Eta_1 + Muon.Eta_1,
    Lepton.Phi = Electron.Phi_1 + Muon.Phi_1,
    Lepton.Type = as.numeric(replace(Electron.PT_1, Electron.PT_1 > 0, 1)) + # 1 for Electrons
      as.numeric(replace(Muon.PT_1, Muon.PT_1 > 0, 2)), # 2 for Muons
    Signal = rep(1,nrow(pre1_rmv))
  ) %>%
  select(-grep(pattern="^Electron|^Muon",colnames(pre1_rmv)))

# Selection 2: Efficiencies of electrons(muon) with PT>20GeV with |eta|<1.442 (2.4) at 85(95)% 
pre2 <- read.delim(file = "/home/user1/Desktop/Root files/top1.txt", sep = ",")
pre2_rmv <- pre2 %>% 
  filter(Muon.PT_1 != "0" | Electron.PT_1 != "0") %>% # select non-zero values
  filter(Muon.PT_1 == 0 | Electron.PT_1 == 0) %>% # select zero values
  filter(Muon.PT_2 == 0, Electron.PT_2 == 0) # Select zero values in second order PTs

pre2_rmv <- pre2_rmv %>%
  mutate(
    Lepton.PT = Electron.PT_1 + Muon.PT_1,
    Lepton.Eta = Electron.Eta_1 + Muon.Eta_1,
    Lepton.Phi = Electron.Phi_1 + Muon.Phi_1,
    Lepton.Type = as.numeric(replace(Electron.PT_1, Electron.PT_1 > 0, 1)) + # 1 for Electrons
      as.numeric(replace(Muon.PT_1, Muon.PT_1 > 0, 2)), # 2 for Muons
    Signal = rep(1,nrow(pre2_rmv))
  ) %>%
  select(-grep(pattern="^Electron|^Muon",colnames(pre2_rmv)))


# Selection 2: Efficiencies of electrons(muon) with PT>20GeV with |eta|<2.5 (2.4) at 80(95)% 
pre3 <- read.delim(file = "/home/user1/Desktop/Root files/top2.txt", sep = ",")

pre3_rmv <- pre3 %>% 
  filter(Muon.PT_1 != "0" | Electron.PT_1 != "0") %>% # select non-zero values
  filter(Muon.PT_1 == 0 | Electron.PT_1 == 0) %>% # select zero values
  filter(Muon.PT_2 == 0, Electron.PT_2 == 0) # Select zero values in second order PTs

pre3_rmv <- pre3_rmv %>%
  mutate(
    Lepton.PT = Electron.PT_1 + Muon.PT_1,
    Lepton.Eta = Electron.Eta_1 + Muon.Eta_1,
    Lepton.Phi = Electron.Phi_1 + Muon.Phi_1,
    Lepton.Type = as.numeric(replace(Electron.PT_1, Electron.PT_1 > 0, 1)) + # 1 for Electrons
      as.numeric(replace(Muon.PT_1, Muon.PT_1 > 0, 2)), # 2 for Muons
    Signal = rep(1,nrow(pre3_rmv))
  ) %>%
  select(-grep(pattern="^Electron|^Muon",colnames(pre3_rmv)))

# Selection 3: COMBINED ALL INFORMATION TO MAKE A DEFAULT SET
pre4 <- read.delim(file = "/home/user1/Desktop/Root files/newtop.txt", sep = ",")

pre4_rmv <- pre4 %>% 
  filter(Muon.PT_1 != "0" | Electron.PT_1 != "0") %>% # select non-zero values
  filter(Muon.PT_1 == 0 | Electron.PT_1 == 0) %>% # select zero values
  filter(Muon.PT_2 == 0, Electron.PT_2 == 0) # Select zero values in second order PTs

pre4_rmv <- pre4_rmv %>%
  mutate(
    Lepton.PT = Electron.PT_1 + Muon.PT_1,
    Lepton.Eta = Electron.Eta_1 + Muon.Eta_1,
    Lepton.Phi = Electron.Phi_1 + Muon.Phi_1,
    Lepton.Type = as.numeric(replace(Electron.PT_1, Electron.PT_1 > 0, 1)) + # 1 for Electrons
      as.numeric(replace(Muon.PT_1, Muon.PT_1 > 0, 2)), # 2 for Muons
    Signal = rep(1,nrow(pre4_rmv))
  ) %>%
  select(-grep(pattern="^Electron|^Muon",colnames(pre4_rmv)))

# Selection 4: COMBINED ALL INFORMATION TO MAKE A DEFAULT SET (with software default run card)
pre5 <- read.delim(file = "/home/user1/Desktop/Root files/newtop2.txt", sep = ",")

pre5_rmv <- pre5 %>% 
  filter(Muon.PT_1 != "0" | Electron.PT_1 != "0") %>% # select non-zero values
  filter(Muon.PT_1 == 0 | Electron.PT_1 == 0) %>% # select zero values
  filter(Muon.PT_2 == 0, Electron.PT_2 == 0) # Select zero values in second order PTs

pre5_rmv <- pre5_rmv %>%
  mutate(
    Lepton.PT = Electron.PT_1 + Muon.PT_1,
    Lepton.Eta = Electron.Eta_1 + Muon.Eta_1,
    Lepton.Phi = Electron.Phi_1 + Muon.Phi_1,
    Lepton.Type = as.numeric(replace(Electron.PT_1, Electron.PT_1 > 0, 1)) + # 1 for Electrons
      as.numeric(replace(Muon.PT_1, Muon.PT_1 > 0, 2)), # 2 for Muons
    Signal = rep(1,nrow(pre5_rmv))
  ) %>%
  select(-grep(pattern="^Electron|^Muon",colnames(pre5_rmv)))

library(expss)
no.events <- c(nrow(pre1_rmv), nrow(pre2_rmv), nrow(pre3_rmv), nrow(pre4_rmv), nrow(pre5_rmv)) %>% as.data.frame()
colnames(no.events) <- "N Events"
