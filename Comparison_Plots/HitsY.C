void HitsY()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 16 15:24:30 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",754,194,800,756);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->Range(-2.172855,-0.1595349,10.60864,1.143632);
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
   
   TH1F *usedHitsY__81 = new TH1F("usedHitsY__81","HitsY",10,0,10);
   usedHitsY__81->SetBinContent(1,1);
   usedHitsY__81->SetBinError(1,0.0004005187);
   usedHitsY__81->SetEntries(6233822);
   usedHitsY__81->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   usedHitsY__81->SetLineColor(ci);
   usedHitsY__81->SetLineWidth(3);
   usedHitsY__81->GetXaxis()->SetTitle("n(y-hits)");
   usedHitsY__81->GetXaxis()->SetLabelFont(42);
   usedHitsY__81->GetXaxis()->SetLabelSize(0.05);
   usedHitsY__81->GetXaxis()->SetTitleSize(0.05);
   usedHitsY__81->GetXaxis()->SetTickLength(0.05);
   usedHitsY__81->GetXaxis()->SetTitleFont(42);
   usedHitsY__81->GetYaxis()->SetTitle("a.u.");
   usedHitsY__81->GetYaxis()->SetLabelFont(42);
   usedHitsY__81->GetYaxis()->SetLabelSize(0.05);
   usedHitsY__81->GetYaxis()->SetTitleSize(0.06);
   usedHitsY__81->GetYaxis()->SetTickLength(0.05);
   usedHitsY__81->GetYaxis()->SetTitleOffset(0);
   usedHitsY__81->GetYaxis()->SetTitleFont(42);
   usedHitsY__81->GetZaxis()->SetLabelFont(42);
   usedHitsY__81->GetZaxis()->SetLabelSize(0.035);
   usedHitsY__81->GetZaxis()->SetTitleSize(0.035);
   usedHitsY__81->GetZaxis()->SetTitleFont(42);
   usedHitsY__81->Draw("EHIST");
   
   TH1F *usedHitsY__82 = new TH1F("usedHitsY__82","HitsY",10,0,10);
   usedHitsY__82->SetBinContent(1,1);
   usedHitsY__82->SetBinError(1,0.0004034906);
   usedHitsY__82->SetEntries(6142330);
   usedHitsY__82->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   usedHitsY__82->SetLineColor(ci);
   usedHitsY__82->SetLineWidth(3);
   usedHitsY__82->GetXaxis()->SetTitle("n(y-hits)");
   usedHitsY__82->GetXaxis()->SetLabelFont(42);
   usedHitsY__82->GetXaxis()->SetLabelSize(0.035);
   usedHitsY__82->GetXaxis()->SetTitleSize(0.035);
   usedHitsY__82->GetXaxis()->SetTitleFont(42);
   usedHitsY__82->GetYaxis()->SetTitle("a.u.");
   usedHitsY__82->GetYaxis()->SetLabelFont(42);
   usedHitsY__82->GetYaxis()->SetLabelSize(0.035);
   usedHitsY__82->GetYaxis()->SetTitleSize(0.035);
   usedHitsY__82->GetYaxis()->SetTitleOffset(0);
   usedHitsY__82->GetYaxis()->SetTitleFont(42);
   usedHitsY__82->GetZaxis()->SetLabelFont(42);
   usedHitsY__82->GetZaxis()->SetLabelSize(0.035);
   usedHitsY__82->GetZaxis()->SetTitleSize(0.035);
   usedHitsY__82->GetZaxis()->SetTitleFont(42);
   usedHitsY__82->Draw("EHISTSAME");
   
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
   entry=leg->AddEntry("usedHitsY","Data","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("usedHitsY","MC","lpf");
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
   entry=leg->AddEntry("usedHitsY","Data","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("usedHitsY","MC","lpf");
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
