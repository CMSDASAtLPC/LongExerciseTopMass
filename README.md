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
   * in the `analyzeNplot` folder, you will write a Python script to select top-pair events that decay in the e&#956 channel, compare the selection on data and simulation (control distributions and event yields), and propagate the sources of systematic uncertainties to the b jet energy peak;
   * in the `fitNcalibrate` folder, you will write a C macro, that you will compiled in Root, to fit the b jet energy peak, calibrate the sensitivity of this variable to the top-quark mass, and evaluate the performance of the method.

## Browsing the content of a TFile

The first step of the exercise consists in opening an input file stored in `/uscms_data/d3/ebouvier/CMS_DAS_FNAL/` and plotting the jet transverse momentum. Once you have written your own small Python script, you can compare it to the one named `controlPlots.py`. 

## Selecting events

This step must be run in the `analyzeNplot` folder. 

To run the event selection and basic filling of histograms using a pre-defined list of samples and cross sections, one can use the following script 
```
python runBJetEnergyPeak.py -i /uscms_data/d3/ebouvier/CMS_DAS_FNAL/ -j data/samples_Run2015_25ns.json -o nominal -n 8
```
Indeed, the Root files to analyze are store in `/uscms_data/d3/ebouvier/CMS_DAS_FNAL/,` while the `data`subfolder contains information for reweighting (cross-sections, PU, b-tagging....). This steps takes approximatively 10-15 mn.

The results are stored in Root files int the `nominal` subfolder. They can be plotted together and compared to data using
```
python plotter.py -i nominal -j data/samples_Run2015_25ns.json  -l 2444.
```
Under `nominal/plots` you'll find a file called `plotter.root`, containing the histograms with the distributions
normalized by integrated luminosity (2444 /pb,) together with `png` and `pdf` versions of the plots.

The number of events selected from data and simulations can be obtained from
```
python getNumberOfEvents.py -i nominal -o table
```

## Fitting the b jet energy peak

This step must be run in the `fitNcalibrate` folder one you have produced a `plotter.root` file. 

## Calibration

## Systematic uncertainties

