//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Par_Okr.h"
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

void __fastcall TForm1::FormCreate(TObject *Sender)
{
 StringGrid1->Visible= false;
 StringGrid2->Visible= false;
}//TForm1
//---------------------------------------------------------------------------

void __fastcall TForm1::ParabolaClick(TObject *Sender)
{
 const float fA=StrToFloat(A->Text),
             fB=StrToFloat(B->Text),
             fC=StrToFloat(C->Text),
             fX_Min=StrToFloat(X_Min->Text),
             fX_Max=StrToFloat(X_Max->Text),
             fdx=fX_Max/10;
 const int n=(fX_Max - fX_Min)*fdx+1;
       float fx, fy;
 Series1->Clear();
 StringGrid1->Cells[0][0]= "X";
 StringGrid1->Cells[1][0]= "Y";
 StringGrid1->ColCount= 2;
 StringGrid1->RowCount= n+1;
 for (int ij=1; ij<=n; ij++)
  {
   fx= fX_Min + (ij-1)*fdx;
   fy= fA*pow(fx, 2) + fB*fx + fC;
   Series1->AddXY(fx,fy,"",clRed);
   StringGrid1->Cells[0][ij]= fx;
   StringGrid1->Cells[1][ij]= fy;
  }//for
 /*
 int ij= 1;
 while (ij<= n)
  {
   fx= fX_Min + (ij - 1)*fdx;
   fy= fA*pow(fx,2) + fB*fx + fC;
   Series1->AddXY(fx,fy,"",clRed);
   StringGrid1->Cells[0][ij]= fx;
   StringGrid1->Cells[1][ij]= fy;
   ij++;
  }//while
 */
 Chart1->Visible=true;
 StringGrid1->Visible=false;
}//ParabolaClick
//---------------------------------------------------------------------------
void __fastcall TForm1::Parabola_Tab_PokClick(TObject *Sender)
{
 Chart1->Visible= false;
 StringGrid1->Visible= true;
}//Parabola_Tab_PokClick
//---------------------------------------------------------------------------
void __fastcall TForm1::OkrygnostClick(TObject *Sender)
{
 const float fAA= StrToFloat(AA->Text),
             fBB= StrToFloat(BB->Text),
             fR= StrToFloat(R->Text);
 float fX,fY,fAlfa;
 Series2->Clear();//Очистка экрана
 StringGrid2->Cells[0][0]= "Град";
 StringGrid2->Cells[1][0]= "X";
 StringGrid2->Cells[2][0]= "Y";
 StringGrid2->ColCount= 3;
 StringGrid2->RowCount= 36 + 1;
 for (int ii= 0, ij= 0; ij<360; ij++)
  {
   /*
   int ij= 0, ii= 0;
   do
    {
    */
     fAlfa= ij*M_PI/180;
     fX= fAA + fR*cos(fAlfa);
     fY= fBB + fR*sin(fAlfa);
     Series2-> AddXY(fX,fY,"",clGreen);
     if (fmod(ij,10)==0)
      {
       ii++;
       StringGrid2->Cells[0][ii]= ij;
       StringGrid2->Cells[1][ii]= FloatToStrF(fX,ffFixed,10,2);
       StringGrid2->Cells[2][ii]= FloatToStrF(fY,ffFixed,10,2);
      }//if
    /*
    }//do
    while(ij<= 360);
    */
  }//for_ii_ij
 Chart2->Visible= true;
 StringGrid2->Visible= false;
}//OkrygnostClick
//---------------------------------------------------------------------------

void __fastcall TForm1::Okr_Tab_PokClick(TObject *Sender)
{
 Chart2->Visible= false;
 StringGrid2->Visible= true;
}//Okr_Tab_PokClick
//---------------------------------------------------------------------------

