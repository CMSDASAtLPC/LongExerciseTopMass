# MtopFromEbPeak
This repository contains some skeletons for [the long exercise related to Top physics at the CMS Data Analysis School 2016](https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideCMSDataAnalysisSchool2016TopExercise).
The objective is not only to extract the top-quark mass by measuring the peak position of the energy of b-tagged jets in the laboratory frame, but also to get more familiar with high-energy physics analyses, making use of Python, C and Root. 

## Installation

To install the code do
```
cmsrel CMSSW_7_4_14
cd CMSSW_7_4_14/src
cmsenv
scram b
git clone git@github.com:ebouvier/MtopFromEbPeak.git UserCode/MtopFromEbPeak
cd UserCode/MtopFromEbPeak
```

This repository is organised in 3 parts:
   * in the `familiarization` folder, you will write a Python script to read a TTree from a TFile;
   * in the `analyze` folder, you will write a Python script to select top-pair events that decay in the e&#956 channel, compare the selection on data and simulation (control distributions and event yields), and propagate the sources of systematic uncertainties to the b jet energy peak;
   * in the `fitNcalibration` folder, you will write a C macro, that you will compiled in Root, to fit the b jet energy peak, calibrate the sensitivity of this variable to the top-quark mass, and evaluate the performance of the method.

## Browsing the content of a TFile

## Selecting events

selection, plots, event yields

## Fitting the b jet energy peak

## Calibration

## Systematic uncertainties

