//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <ShellApi.h>
#include <Printers.hpp>

#include "Schet.h"
int iN, iK, iG, iV, iS;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NachChange(TObject *Sender)
{
 iN= StrToInt(Nach->Text);
 if (iN < 0 || iN > 1000000)
 {
  ShowMessage("¬ведите число от 0 до 1000000");
  Nach->Text= "1";
 }//if
 /*else
  ShowMessage("ѕравильно!");*/
}//NachChange
//---------------------------------------------------------------------------
void __fastcall TForm1::KonecChange(TObject *Sender)
{
 iK= StrToInt(Konec->Text);
 iN= StrToInt(Nach->Text);
 if (iK < iN || iK > 1000000)
 {
  ShowMessage("¬ведите число от начала счЄта до 1000000");
  Konec->Text= iN + 1;
 }//if
}//KonecChange
//---------------------------------------------------------------------------
void __fastcall TForm1::GorizChange(TObject *Sender)
{
 iV= StrToInt(Vert->Text);
 if (iV < 0 || iV > 20000)
 {
  ShowMessage("¬ведите число от 0 до 594");
  Vert->Text= "10";
 }//if
}//VertChange
//---------------------------------------------------------------------------
void __fastcall TForm1::VertChange(TObject *Sender)
{
 iG= StrToInt(Goriz->Text);
 if (iG < 0 || iG > 20000)
 {
  ShowMessage("¬ведите число от 0 до 420");
  Goriz->Text= "10";
 }//if
}//VertChange
//---------------------------------------------------------------------------
void __fastcall TForm1::RazmerChange(TObject *Sender)
{
 iS= StrToInt(Razmer->Text);
 if (iS <= 0 || iS > 82)
 {
  ShowMessage("¬ведите размер\
  шрифта от 1 до 82");
  Razmer->Text= "10";
 }//if
}//RazmerChange
//---------------------------------------------------------------------------
void __fastcall TForm1::PyskClick(TObject *Sender)
{
 int iVp, iGp;
 iK= StrToInt(Konec->Text);
 iN= StrToInt(Nach->Text);
 iV= StrToInt(Vert->Text);
 iG= StrToInt(Goriz->Text);
 iS= StrToInt(Razmer->Text);
 if (iK < iN || iK > 1000000 || iN < 0 || iN > 1000000)
  {
   ShowMessage("¬ведите число начала и конца\
   счЄтчика от 0 до 1000000");
   Nach->Text= "1";
   Konec->Text= iN + 1;
   Abort();
  }//if
 if (iG < 0 || iG > 20000 || iV < 0 || iV > 20000)
  {
   ShowMessage("¬ведите границу отступа от 0 до 594");
   Vert->Text= "10";
   Goriz->Text= "10";
   Abort();
  }//if
 if (iS <= 0 || iS > 82)
 {
  ShowMessage("¬ведите размер\
  шрифта от 1 до 82");
  Razmer->Text= "10";
  Abort();
 }//if
 String Rab;
 iVp=(iV*2000)/85;
 iGp=(iG*2000)/85;
 /*ShowMessage(iVp);
 ShowMessage(iGp);*/
 for (int ij = iN; ij <= iK; ij++)
  {
   Rab= ij;
   TPrinter *Prntr= Printer();
   Prntr->Canvas->Font->Style << fsBold;
   Prntr->Canvas->Font->Size= iS;
   Prntr->BeginDoc();
   Prntr->Canvas->TextOut(iGp,iVp,Rab);
	 /*Prntr->Canvas->Draw(
	(Prntr->PageWidth - Imagel->Picture->Bitmap->Width)12,\
	40, Imagel->Picture->Bitmap);*/
   Prntr->EndDoc();
   //RichEdit1->Lines->Insert(0,Rab);
   //RichEdit1->Lines->SaveToFile(Rez);
   //RichEdit1->Print(Rab);
   //RichEdit1->Lines->Delete(0);
   //ShowMessage(ij);
  }//for
 //ShowMessage(iS);
}//PyskClick
//---------------------------------------------------------------------------
void __fastcall TForm1::VuxodClick(TObject *Sender)
{
 Close();
}//VuxodClick
//---------------------------------------------------------------------------
