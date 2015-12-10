# MtopFromEbPeak
This repository contains some skeletons for [the long exercise related to Top physics at the CMS Data Analysis School 2016](https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideCMSDataAnalysisSchool2016TopExercise).
The objective is not only to extract the top-quark mass by measuring the peak position of the energy of b-tagged jets in the laboratory frame, but also to get more familiar with high-energy physics analyses, making use of Python, C and Root. 

## Installation

Before installing a fresh CMSSW release, do
   * in csh/tcsh:
```
source /cvmfs/cms.cern.ch/cmsset_default.csh
setenv SCRAM_ARCH slc6_amd64_gcc491
```
   * in bash/sh:
```
source /cvmfs/cms.cern.ch/cmsset_default.sh
export SCRAM_ARCH=slc6_amd64_gcc491
```
Then, install the code by doing
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
   * in the `analyzeNplot` folder, you will write a Python script to select top-pair events that decay in the e&#956; channel, compare the selection on data and simulation (control distributions and event yields), and propagate the sources of systematic uncertainties to the b jet energy peak;
   * in the `fitNcalibrate` folder, you will write a C macro, that you will compiled in Root, to fit the b jet energy peak. In this same folder, you will then calibrate the b jet energy peak measured for the set of selection criteria previously defined to the expected b jet energy peak, from which the top-quark mass can be easily extracted. You will also evaluate the performance of the method.

## Browsing the content of a TFile

The first step of the exercise consists in opening an input file stored in `/eos/uscms/store/user/cmsdas/2016/LONG_EXERCISES/MtopFromEbPeak/` and plotting the jet transverse momentum. Once you have written your own small Python script, you can compare it to the one named `controlPlots.py`in the `familiarization` folder. 

_The input files have been produced thanks to a [setup](https://github.com/pfs/BJetEnergyPeak) kindly provided by P. Silva._

## Selecting events

This step must be run in the `analyzeNplot` folder. 

To run the event selection and basic filling of histograms using a pre-defined list of samples and cross sections, one can use the following script 
```
python runBJetEnergyPeak.py -i /store/user/cmsdas/2016/LONG_EXERCISES/MtopFromEbPeak -j data/samples_Run2015_25ns.json -o nominal -n 8
```
Indeed, the Root files to analyze are stored in `/eos/uscms/store/user/cmsdas/2016/LONG_EXERCISES/MtopFromEbPeak/,` while the `data` subfolder contains information for reweighting (cross-sections, PU, b-tagging....). This steps takes approximatively 10-15 mn.

The results are stored in Root files int the `nominal` subfolder. They can be plotted together and compared to data using
```
python plotter.py -i nominal -j data/samples_Run2015_25ns.json  -l 2444.
```
Under `nominal/plots` you'll find a file called `plotter.root`, containing the histograms with the distributions
normalized by integrated luminosity (2444 /pb,) together with `png` and `pdf` versions of the plots.

The number of events selected from data and simulations can be obtained from
```
python getNumberOfEvents.py -i nominal -o table -j data/samples_Run2015_25ns.json
```

## Fitting the b jet energy peak

This step must be run in the `fitNcalibrate` folder. A python skeleton named `fitPeak.py` is provided. For MC, the usage is:
```
python fitPeak.py -i "nominal" -j "../analyzeNplot/data/samples_Run2015_25ns.json" -l 2444.
```
while for data, it is:
```
python fitPeak.py -i "nominal" -j "../analyzeNplot/data/samples_Run2015_25ns.json" -l 2444. -d
```
The argument following `-i` is the folder in which the `plotter.root` file has been previously produced. As previously, `-l` precedes the luminosity and `-j` the path for the json file. 

For simulations, signal+background, normalized at their cross-sections, are fitted together.

