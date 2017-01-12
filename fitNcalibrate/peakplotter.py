#!/usr/bin/env python
import ROOT
from ROOT import *
from array import array
import tdrstyle

theor=array('d',[65.740336799410,67.570939637681,69.390239814814])
exper=array('d',[65.0,67.0,70.0])
theor_err=array('d',[1.0,1.0,1.0])
exper_err=array('d',[1.0,1.0,1.0])

c1 = TCanvas("canvas 1", "c1", 800, 600)
c1.cd()

graph = TGraphErrors(len(theor),theor,exper,theor_err,exper_err)
graph.SetMarkerColor(4)
graph.SetMarkerStyle(21)
graph.SetTitle("CMS Simulation (private)")
graph.GetXaxis().SetTitle("Predicted Energy Peak Position [GeV]")
graph.GetYaxis().SetTitle("Measured Energy Peak Position [GeV]")
gfit = TF1("f","[0] + [1] * x")
graph.Fit(gfit)
graph.Draw("AP")

ideal = TGraph(len(theor),theor,theor)
ideal.SetLineColor(3)
ideal.Draw("SAME")

tdrstyle.setTDRStyle()

# Save the plot
c1.SaveAs("calibration.png")

