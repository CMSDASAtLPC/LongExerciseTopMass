

def getBtagSF(pt, flavourType=5, syst=0, level="M"):
    if level=="L":
        if pt < 30    : errValues = [0.063606932759284973, 0.025442773476243019]
        elif pt < 50  : errValues = [0.034989029169082642, 0.013995612040162086]
        elif pt < 70  : errValues = [0.033047597855329514, 0.013219038955867290]
        elif pt < 100 : errValues = [0.034643515944480896, 0.013857406564056873]
        elif pt < 140 : errValues = [0.033017721027135849, 0.013207088224589825]
        elif pt < 200 : errValues = [0.028828304260969162, 0.011531321331858635]
        elif pt < 300 : errValues = [0.045852780342102051, 0.018341112881898880]
        elif pt < 600 : errValues = [0.045958288013935089, 0.018383314833045006]
        else          : errValues = [0.056262202560901642, 0.022504881024360657]

        
        if syst==0: err = 0
        else:
            if abs(flavourType)==5:
                err = errValues[1]
            else:
                err = errValues[0]

        if syst==2:
            err = err*-1.
    
        SF = "0.884016*((1.+(0.0331508*%f))/(1.+(0.0285096*%f))) + %f"%(pt,pt,err)

    if level=="M":
        if pt < 30    : errValues = [0.12166473269462585  , 0.040554910898208618]
        elif pt < 50  : errValues = [0.055085029453039169 , 0.01836167648434639 ]
        elif pt < 70  : errValues = [0.048597507178783417 , 0.016199169680476189]
        elif pt < 100 : errValues = [0.043902803212404251 , 0.014634267427027225]
        elif pt < 140 : errValues = [0.042596768587827682 , 0.014198922552168369]
        elif pt < 200 : errValues = [0.049642853438854218 , 0.016547618433833122]
        elif pt < 300 : errValues = [0.06421864777803421  , 0.02140621654689312 ]
        elif pt < 600 : errValues = [0.070689648389816284 , 0.023563217371702194]
        else          : errValues = [0.10414865612983704  , 0.034716218709945679]

        
        if syst==0: err = 0
        else:
            if abs(flavourType)==5:
                err = errValues[1]
            else:
                err = errValues[0]

        if syst==2:
            err = err*-1.
    
        SF = "0.718014*((1.+(0.0685826*%f))/(1.+(0.0475779*%f))) + %f"%(pt,pt,err)

    if level=="T":
        if pt < 30    : errValues = [0.12066856026649475  , 0.034476730972528458]
        elif pt < 50  : errValues = [0.079742610454559326 , 0.022783603519201279]
        elif pt < 70  : errValues = [0.073544494807720184 , 0.021012712270021439]
        elif pt < 100 : errValues = [0.059891223907470703 , 0.017111778259277344]
        elif pt < 140 : errValues = [0.059213291853666306 , 0.016918083652853966]
        elif pt < 200 : errValues = [0.058427996933460236 , 0.016693713143467903]
        elif pt < 300 : errValues = [0.099112451076507568 , 0.02831784263253212 ]
        elif pt < 600 : errValues = [0.11530528217554092  , 0.032944366335868835]
        else          : errValues = [0.19122670590877533  , 0.054636202752590179]

        
        if syst==0: err = 0
        else:
            if abs(flavourType)==5:
                err = errValues[1]
            else:
                err = errValues[0]

        if syst==2:
            err = err*-1.
    
        SF = "0.849497*((1.+(0.01854*%f))/(1.+(0.0153613*%f))) + %f"%(pt,pt,err)

    return eval(SF)



def getBtagEvtWeight(taggedJets,syst=0):
    
    evWgt = 1
    for ij in xrange(0,len(taggedJets)):
        evWgt = evWgt * (1 - getBtagSF(taggedJets[ij].Pt(),syst))

    return 1-evWgt
