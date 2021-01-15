python runBJetEnergyPeak.py -i /store/user/cmsdas/2021/long_exercises/TopMass -j data/samples_Run2016_25ns.json -o nominal_2016 -n 10
python plotter.py -i nominal_2016 -j data/samples_Run2016_25ns.json -l 35867.

python runBJetEnergyPeak.py -i /store/user/cmsdas/2021/long_exercises/TopMass -j data/samples_Run2016_m169p5.json -o nominal_2016_m169p5 -n 10
python plotter.py -i nominal_2016_m169p5 -j data/samples_Run2016_m169p5.json -l 35867.

python runBJetEnergyPeak.py -i /store/user/cmsdas/2021/long_exercises/TopMass -j data/samples_Run2016_m175p5.json -o nominal_2016_m175p5 -n 10
python plotter.py -i nominal_2016_m175p5 -j data/samples_Run2016_m175p5.json -l 35867.
