#!/usr/bin/env python
import ROOT
from ROOT import *
from array import array
import tdrstyle

# Add a zero to the theoretical values to make a nice y=x plot
theor=array('d',[0.0,65.740336799410,67.570939637681,69.390239814814])
exper=array('d',[64.89,66.34,67.09])
theor_err=array('d',[0.0079,0.0077,0.0076])
exper_err=array('d',[0.59,0.26,0.64])

c1 = TCanvas("canvas 1", "c1", 800, 600)
c1.cd()

graph = TGraphErrors(len(exper),theor[1:],exper,theor_err,exper_err)
graph.SetMarkerColor(4)
graph.SetMarkerStyle(21)
graph.SetTitle("")
graph.GetXaxis().SetTitle("Predicted Energy Peak Position [GeV]")
graph.GetYaxis().SetTitle("Measured Energy Peak Position [GeV]")
graph.GetYaxis().SetTitleOffset(1.4)

gfit = TF1("f","[0] + [1] * x")
graph.Fit(gfit)
graph.Draw("AP")

ideal = TGraph(len(theor),theor,theor)
ideal.SetLineColor(4)
ideal.SetLineStyle(7)
ideal.Draw("SAME")

label1 = TLatex()
label1.SetNDC()
label1.SetTextFont(60)
label1.SetTextSize(0.07)
label1.SetTextAlign(31)
label1.DrawLatex(0.32, 0.92, "CMS DAS")
label2 = TLatex()
label2.SetNDC()
label2.SetTextFont(42)
label2.SetTextSize(0.06)
label2.SetTextAlign(11)
label2.DrawLatex(0.33, 0.92, "#it{Simulation}")

leg = TLegend(0.1,0.75,0.4,0.9)
leg.AddEntry(graph,"Simulation","p")
leg.AddEntry(ideal,"Expectation","l")
leg.AddEntry(gfit,"Fit","l")
leg.Draw("SAME")

tdrstyle.setTDRStyle()

gPad.Update()
stats = gPad.GetPrimitive("stats")
stats.__class__ = ROOT.TPaveStats
stats.SetY1NDC(0.1)
stats.SetY2NDC(0.4)
stats.SetX1NDC(0.6)
stats.SetX2NDC(0.9)

# Save the plot
c1.SaveAs("calibration.pdf")

