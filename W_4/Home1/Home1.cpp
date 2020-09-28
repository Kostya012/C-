//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Home1.h"
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
 const int m= StrToInt(Dl_Mas->Text);
 Isx_Mas->RowCount= m + 1;
 Sort_Mas->RowCount= m + 1;
 Isx_Mas->Cells[0][0]= " №";
 Isx_Mas->Cells[1][0]= " Массив R ";
 Isx_Mas->Cells[2][0]= " Массив K ";
 Sort_Mas->Cells[0][0]= " №";
 Sort_Mas->Cells[1][0]= " Массив C ";
 Sort_Mas->Cells[2][0]= " Массив B ";
 Sort_Mas->Cells[3][0]= " Массив K ";
 //нумерируем строки таблиц
 for (int ij= 1; ij<= m; ++ij)
  {
   Isx_Mas->Cells[0][ij]= ij;
   Sort_Mas->Cells[0][ij]= ij;
  }//for
}//FormCreate
//---------------------------------------------------------------------------

void __fastcall TForm1::Dl_MasChange(TObject *Sender)
{
 const int m= StrToInt(Dl_Mas->Text);
 Isx_Mas->RowCount= m + 1;
 Sort_Mas->RowCount= m + 1;
 for (int ij= 1; ij<= m; ++ij)
  {
   Isx_Mas->Cells[0][ij]= ij;
   Sort_Mas->Cells[0][ij]= ij;
  }//for
}//Dl_MasChange
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
