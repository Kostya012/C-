//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Polz_Fun.h"
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
 const int m= StrToInt(Dl_m_Mas->Text),
           n= StrToInt(Dl_n_Mas->Text);
 if (n>= m)
  {
   Isx_Mas->RowCount= n + 1;
   Sort_Mas->RowCount= n + 1;
   Isx_Mas->Cells[0][0]= "№";
   Isx_Mas->Cells[1][0]= "n_Mas";
   Isx_Mas->Cells[2][0]= "m_Mas";
   Sort_Mas->Cells[0][0]= "№";
   Sort_Mas->Cells[1][0]= "n_Mas";
   Sort_Mas->Cells[2][0]= "m_Mas";
   for (int ij= 1; ij <= n; ++ij)
    {
     Isx_Mas->Cells[0][ij]= ij;
     Sort_Mas->Cells[0][ij]= ij;
    }//for ij
  }//if
 else
 {
  Isx_Mas->RowCount= m + 1;
  Sort_Mas->RowCount= m + 1;
  Isx_Mas->Cells[0][0]= "№";
  Isx_Mas->Cells[1][0]= "n_Mas";
  Isx_Mas->Cells[2][0]= "m_Mas";
  Sort_Mas->Cells[0][0]= "№";
  Sort_Mas->Cells[1][0]= "n_Mas";
  Sort_Mas->Cells[2][0]= "m_Mas";
  for (int ij= 1; ij <= m; ++ij)
   {
    Isx_Mas->Cells[0][ij]= ij;
    Isx_Mas->Cells[1][ij]= "";
    Isx_Mas->Cells[2][ij]= "";
    Sort_Mas->Cells[0][ij]= ij;
    Sort_Mas->Cells[1][ij]= "";
    Sort_Mas->Cells[2][ij]= "";
   }//for ij
 }//else
}//FormCreate
//---------------------------------------------------------------------------

void __fastcall TForm1::Dl_n_MasChange(TObject *Sender)
{
 const int m= StrToInt(Dl_m_Mas->Text),
           n= StrToInt(Dl_n_Mas->Text);
 if (n >= m)
  {
   Isx_Mas->RowCount= n + 1;
   Sort_Mas->RowCount= n + 1;
   for (int ij= 1; ij <= n; ++ij)
    {
     Isx_Mas->Cells[0][ij]= ij;
     Isx_Mas->Cells[1][ij]= "";
     Isx_Mas->Cells[2][ij]= "";
     Sort_Mas->Cells[0][ij]= ij;
     Sort_Mas->Cells[1][ij]= "";
     Sort_Mas->Cells[2][ij]= "";
    }//for ij
  }//if
}//Dl_n_MasChange
//---------------------------------------------------------------------------
void __fastcall TForm1::Dl_m_MasChange(TObject *Sender)
{
 const int m= StrToInt(Dl_m_Mas->Text),
           n= StrToInt(Dl_n_Mas->Text);
 if (m >= n)
  {
   Isx_Mas->RowCount= m + 1;
   Sort_Mas->RowCount= m + 1;
   for (int ij= 1; ij <= m; ++ij)
    {
     Isx_Mas->Cells[0][ij]= ij;
     Isx_Mas->Cells[1][ij]= "";
     Isx_Mas->Cells[2][ij]= "";
     Sort_Mas->Cells[0][ij]= ij;
     Sort_Mas->Cells[1][ij]= "";
     Sort_Mas->Cells[2][ij]= "";
    }//for ij
  }//if
}//Dl_m_MasChange
//---------------------------------------------------------------------------
const int nn= 100;//определение мах длины массива
typedef int int_Mas[nn];//определение пользовательского типа

void Vvod_Mas(TStringGrid *Is_Mas, int_Mas & iMas, int iDl, int iStolb)
 {
  for (int ij= 0; ij<iDl; ++ij)
   iMas[ij]=StrToInt(Is_Mas->Cells[iStolb][ij+1]);
 }//Vvod_Mas

float Sym_Mas(int_Mas iMas, int iDl)
 {
  float fS=0;
   for (int ij=0; ij<iDl; ++ij)
    fS+=iMas[ij];
  return fS;
 }//Sym_Mas
//---------------------------------------------------------------------------

void Vuvod_Mas(TStringGrid *Rez_Mas, int iRez_Mas[], int iDl, int iStolb)
 {
  for (int ij=0; ij<iDl; ++ij)
    Rez_Mas->Cells[iStolb][ij+1]= iRez_Mas[ij];
 }//Vuvod_Mas
//---------------------------------------------------------------------------
void Sort_Massiva(int_Mas &iMas, int iDl)
//метод линейной сортировки
{
 for (int ij=0; ij<iDl - 1; ++ij)
  for (int ii=ij + 1, iBuf; ii<iDl; ++ii)
   if (iMas[ij]>iMas[ii])
    {
     iBuf= iMas[ij];
     iMas[ij]= iMas[ii];
     iMas[ii]= iBuf;
    }//if
}//Sort_Massiva
//---------------------------------------------------------------------------
void __fastcall TForm1::PyskClick(TObject *Sender)
{
 const int n= StrToInt(Dl_n_Mas->Text),
           m= StrToInt(Dl_m_Mas->Text);
 int_Mas in_Mas, im_Mas;

 Vvod_Mas(Isx_Mas, in_Mas, n, 1);
 Vvod_Mas(Isx_Mas, im_Mas, m, 2);

 //сортировка массивов
 Sort_Massiva (in_Mas, n);
 Sort_Massiva (im_Mas, m);

 //вывод массивов
 Vuvod_Mas(Sort_Mas, in_Mas, n, 1);
 Vuvod_Mas(Sort_Mas, im_Mas, m, 2);

 float fS= Sym_Mas(in_Mas, n) + Sym_Mas(im_Mas, m);
 Symma_Symm->Caption= FloatToStrF(fS, ffFixed, 10, 2);
}//PyskClick
//---------------------------------------------------------------------------

