# MtopFromEbPeak
This repository contains some skeletons for [the long exercise related to Top physics at the CMS Data Analysis School 2020](https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideCMSDataAnalysisSchoolLPC2020TopExercise) where you will find the most recent version of the instructions below.
The objective is not only to extract the top-quark mass by measuring the peak position of the energy of b-tagged jets in the laboratory frame, but also to get more familiar with high-energy physics analyses, making use of Python, C and Root. 

## Installation

Before installing a fresh CMSSW release, do
   * in csh/tcsh:
```
source /cvmfs/cms.cern.ch/cmsset_default.csh
setenv SCRAM_ARCH slc7_amd64_gcc700
```
   * in bash/sh:
```
source /cvmfs/cms.cern.ch/cmsset_default.sh
export SCRAM_ARCH=slc7_amd64_gcc700
```
Then, install the code by doing
```
cmsrel CMSSW_10_6_4
cd CMSSW_10_6_4/src
cmsenv
scram b
git clone git@github.com:CMSDASAtLPC/LongExerciseTopMass.git
cd LongExerciseTopMass/
```

This repository is organised in 4 parts:
   * in the `familiarization` folder, you will write a Python script to read a TTree from a TFile;
   * in the `analyzeNplot` folder, you will write a Python script to select top-pair events that decay in the e&#956; channel, compare the selection on data and simulation (control distributions and event yields), and propagate the sources of systematic uncertainties to the b jet energy peak;
   * in the `fitNcalibrate` folder, you will write a python script to fit the b jet energy peak. In this same folder, you will then calibrate the b jet energy peak measured for the set of selection criteria previously defined to the expected b jet energy peak, from which the top-quark mass can be easily extracted. You will also evaluate the performances of the method.
   * in the `finalize` folder, a macro named `showComparison.C` will enable you to compare your result with the standard top-quark mass measurements performed with 8 TeV data.

## Browsing the content of a TFile

The first step of the exercise consists in opening an input file stored in `/eos/uscms/store/user/cmsdas/2020/long_exercises/TopMass/` and plotting the jet transverse momentum. Once you have written your own small Python script, you can compare it to the one named `controlPlots.py`in the `familiarization` folder. 

_The input files have been produced thanks to a [setup](https://github.com/pfs/BJetEnergyPeak) kindly provided by P. Silva._

## Selecting events

This step must be run in the `analyzeNplot` folder. 

To run the event selection and basic filling of histograms using a pre-defined list of samples and cross sections, one can use the following script 
```
python runBJetEnergyPeak.py -i /store/user/cmsdas/2020/long_exercises/TopMass -j data/samples_Run2016_25ns.json -o nominal -n 2
```
Indeed, the Root files to analyze are stored in `/eos/uscms/store/user/cmsdas/2020/long_exercises/TopMass/,` while the `data` subfolder contains information for reweighting (cross-sections, PU, b-tagging....). This steps takes approximatively 10-15 mn.

The results are stored in Root files int the `nominal` subfolder. They can be plotted together and compared to data using
```
python plotter.py -i nominal -j data/samples_Run2016_25ns.json  -l 35867.
```
Under `nominal/plots` you'll find a file called `plotter.root`, containing the histograms with the distributions
normalized by integrated luminosity (35867 /pb,) together with `png` and `pdf` versions of the plots.

The number of events selected from data and simulations can be obtained from
```
python getNumberOfEvents.py -i nominal -o table -j data/samples_Run2016_25ns.json
```

## Fitting the b jet energy peak

This step must be run in the `fitNcalibrate` folder. A python skeleton named `fitPeak.py` is provided. For MC, the usage is:
```
python fitPeak.py -i "nominal" -j "../analyzeNplot/data/samples_Run2016_25ns.json" -l 35867.
```
while for data, it is:
```
python fitPeak.py -i "nominal" -l 35867. -d
```
The argument following `-i` is the folder in which the `plotter.root` file has been previously produced. As previously, `-l` precedes the luminosity and `-j` the path for the json file. 

For simulations, signal+background, normalized at their cross-sections, are fitted together.

## Comparing your result with CMS legacy results

Once you have unblinded your analysis, you can do:
```
root -l
.L showComparison.C
showComparison(lumi, value, stat, syst)
.q
```
replacing `lumi` by the top-quark mass you measured, and `stat` and `syst` respectively by the statistical and systematic uncertainties of this measurement. You will get a comparison between your measurement and the standard top-quark mass measurements performed with 8 TeV data.

