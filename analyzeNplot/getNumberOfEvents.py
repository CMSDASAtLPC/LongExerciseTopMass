#!/usr/bin/env python
import math, ROOT, json, optparse, os, sys

#configuration
usage = 'usage: %prog [options]'
parser = optparse.OptionParser(usage)
parser.add_option('-i', '--inDir',       dest='inDir',       help='input directory with files',   default=None,        type='string')
parser.add_option('-o', '--outDir',      dest='outDir',      help='output directory',             default='analysis',  type='string')
(opt, args) = parser.parse_args()

#read list of samples
samplesList={"Diboson", "Single top", "t#bar{t}+V", "W", "DY", "t#bar{t}"} 

#prepare output
if not os.path.isdir(opt.outDir):
    os.mkdir(opt.outDir)

texFile = "NumberOfEvents.tex"
tex = open(os.path.join(opt.outDir,texFile), 'w')
tex.write("\\documentclass[a4paper]{article}\n")
tex.write("\\usepackage{array}\n")
tex.write("\\usepackage{multirow}\n")
tex.write("\\usepackage{amsmath}\n")
tex.write("\\newcommand{\\ttbar}{\\ensuremath{\\text{t}\\bar{\\text{t}}}}\n")
tex.write("\\begin{document}\n")
tex.write("\\begin{center}\n")
tex.write("\n%%%\n")

tex.write("\\begin{table}[b!] \n")
tex.write("\\begin{center} \n")
tex.write("\\begin{tabular}{lr} \n")
tex.write("Process & Number of events \\\\ \n")
tex.write("\\hline\n")

inF = ROOT.TFile.Open(os.path.join(os.path.join(opt.inDir,"plots"),"plotter.root"))

#iterate over all processes
NSim = 0.
for sampleInfo in samplesList: 
    hist = inF.Get("nvtx/nvtx_%s" % sampleInfo)
    NTot = hist.Integral()
    NSim += NTot
    tex.write("%s & $%d$ \\\\ \n" % (sampleInfo.replace("t#bar{t}","\\ttbar"), NTot))
 
hist = inF.Get("nvtx/nvtx")
NData = hist.Integral()

# finish output
tex.write("\\hline\n")
tex.write("Total from simulations & $%d$ \\\\ \n" % (NSim))
tex.write("Data & $%d$ \\\\ \n" % (NData))
        
tex.write("\\end{tabular}\n")
tex.write("\\end{center}\n")
tex.write("\\end{table}\n")

tex.write("\n%%%\n")
tex.write("\\end{center}\n")
tex.write("\n\\end{document}")
    
tex.close()

os.chdir(opt.outDir)
cmd = "pdflatex " + texFile
os.system(cmd)
cmd = "rm -f *.aux *.log"
os.system(cmd)
os.system("cd -")
print "\n"+os.path.join(opt.outDir,texFile)+" has been created and compiled."
