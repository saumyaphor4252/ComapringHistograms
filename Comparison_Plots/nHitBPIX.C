void nHitBPIX()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 16 15:24:20 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",754,194,800,756);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->Range(-9.777846,-0.0484357,47.73889,0.3472133);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.17);
   c->SetRightMargin(0.04761905);
   c->SetTopMargin(0.07152683);
   c->SetBottomMargin(0.1224209);
   c->SetFrameFillStyle(0);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   
   TH1F *usednHitBPIXTrack__15 = new TH1F("usednHitBPIXTrack__15","nHitBPIX",45,0,45);
   usednHitBPIXTrack__15->SetBinContent(1,0.04597452);
   usednHitBPIXTrack__15->SetBinContent(2,0.1527889);
   usednHitBPIXTrack__15->SetBinContent(3,0.2201524);
   usednHitBPIXTrack__15->SetBinContent(4,0.3035067);
   usednHitBPIXTrack__15->SetBinContent(5,0.2481184);
   usednHitBPIXTrack__15->SetBinContent(6,0.02794947);
   usednHitBPIXTrack__15->SetBinContent(7,0.001509507);
   usednHitBPIXTrack__15->SetBinError(1,8.58779e-05);
   usednHitBPIXTrack__15->SetBinError(2,0.0001565557);
   usednHitBPIXTrack__15->SetBinError(3,0.000187925);
   usednHitBPIXTrack__15->SetBinError(4,0.0002206515);
   usednHitBPIXTrack__15->SetBinError(5,0.0001995043);
   usednHitBPIXTrack__15->SetBinError(6,6.695909e-05);
   usednHitBPIXTrack__15->SetBinError(7,1.55611e-05);
   usednHitBPIXTrack__15->SetEntries(6233822);
   usednHitBPIXTrack__15->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   usednHitBPIXTrack__15->SetLineColor(ci);
   usednHitBPIXTrack__15->SetLineWidth(3);
   usednHitBPIXTrack__15->GetXaxis()->SetTitle("N_{hit}");
   usednHitBPIXTrack__15->GetXaxis()->SetLabelFont(42);
   usednHitBPIXTrack__15->GetXaxis()->SetLabelSize(0.05);
   usednHitBPIXTrack__15->GetXaxis()->SetTitleSize(0.05);
   usednHitBPIXTrack__15->GetXaxis()->SetTickLength(0.05);
   usednHitBPIXTrack__15->GetXaxis()->SetTitleFont(42);
   usednHitBPIXTrack__15->GetYaxis()->SetTitle("a.u.");
   usednHitBPIXTrack__15->GetYaxis()->SetLabelFont(42);
   usednHitBPIXTrack__15->GetYaxis()->SetLabelSize(0.05);
   usednHitBPIXTrack__15->GetYaxis()->SetTitleSize(0.06);
   usednHitBPIXTrack__15->GetYaxis()->SetTickLength(0.05);
   usednHitBPIXTrack__15->GetYaxis()->SetTitleOffset(0);
   usednHitBPIXTrack__15->GetYaxis()->SetTitleFont(42);
   usednHitBPIXTrack__15->GetZaxis()->SetLabelFont(42);
   usednHitBPIXTrack__15->GetZaxis()->SetLabelSize(0.035);
   usednHitBPIXTrack__15->GetZaxis()->SetTitleSize(0.035);
   usednHitBPIXTrack__15->GetZaxis()->SetTitleFont(42);
   usednHitBPIXTrack__15->Draw("EHIST");
   
   TH1F *usednHitBPIXTrack__16 = new TH1F("usednHitBPIXTrack__16","nHitBPIX",45,0,45);
   usednHitBPIXTrack__16->SetBinContent(1,0.04452659);
   usednHitBPIXTrack__16->SetBinContent(2,0.148507);
   usednHitBPIXTrack__16->SetBinContent(3,0.2217103);
   usednHitBPIXTrack__16->SetBinContent(4,0.3062012);
   usednHitBPIXTrack__16->SetBinContent(5,0.2497271);
   usednHitBPIXTrack__16->SetBinContent(6,0.02792198);
   usednHitBPIXTrack__16->SetBinContent(7,0.001405818);
   usednHitBPIXTrack__16->SetBinError(1,8.514186e-05);
   usednHitBPIXTrack__16->SetBinError(2,0.0001554916);
   usednHitBPIXTrack__16->SetBinError(3,0.0001899881);
   usednHitBPIXTrack__16->SetBinError(4,0.0002232734);
   usednHitBPIXTrack__16->SetBinError(5,0.0002016351);
   usednHitBPIXTrack__16->SetBinError(6,6.742276e-05);
   usednHitBPIXTrack__16->SetBinError(7,1.512858e-05);
   usednHitBPIXTrack__16->SetEntries(6142330);
   usednHitBPIXTrack__16->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   usednHitBPIXTrack__16->SetLineColor(ci);
   usednHitBPIXTrack__16->SetLineWidth(3);
   usednHitBPIXTrack__16->GetXaxis()->SetTitle("N_{hit}");
   usednHitBPIXTrack__16->GetXaxis()->SetLabelFont(42);
   usednHitBPIXTrack__16->GetXaxis()->SetLabelSize(0.035);
   usednHitBPIXTrack__16->GetXaxis()->SetTitleSize(0.035);
   usednHitBPIXTrack__16->GetXaxis()->SetTitleFont(42);
   usednHitBPIXTrack__16->GetYaxis()->SetTitle("a.u.");
   usednHitBPIXTrack__16->GetYaxis()->SetLabelFont(42);
   usednHitBPIXTrack__16->GetYaxis()->SetLabelSize(0.035);
   usednHitBPIXTrack__16->GetYaxis()->SetTitleSize(0.035);
   usednHitBPIXTrack__16->GetYaxis()->SetTitleOffset(0);
   usednHitBPIXTrack__16->GetYaxis()->SetTitleFont(42);
   usednHitBPIXTrack__16->GetZaxis()->SetLabelFont(42);
   usednHitBPIXTrack__16->GetZaxis()->SetLabelSize(0.035);
   usednHitBPIXTrack__16->GetZaxis()->SetTitleSize(0.035);
   usednHitBPIXTrack__16->GetZaxis()->SetTitleFont(42);
   usednHitBPIXTrack__16->Draw("EHISTSAME");
   
   TLegend *leg = new TLegend(0.74,0.7,0.9,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Campaign","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("usednHitBPIXTrack","Data","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("usednHitBPIXTrack","MC","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.74,0.7,0.9,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","Campaign","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("usednHitBPIXTrack","Data","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("usednHitBPIXTrack","MC","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.74,0.94,"0T cosmic rays");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.039);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.27,0.94,"Internal Work");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.039);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.94,"CMS");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
