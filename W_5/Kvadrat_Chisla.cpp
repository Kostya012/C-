//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
String Rez_f;
const int n=1000;//max ����� ��������� �������
int iN_Min,//min �������� �����
    iN_Max;//max �������� �����
#pragma hdrstop

#include "Kvadrat_Chisla.h"
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
 iN_Min= StrToInt(N_Min->Text);
 iN_Max= StrToInt(N_Max->Text);
 Ykazanie->Caption= "������� ����� � ���������\
 �� " + IntToStr(iN_Min) + " �� " + IntToStr(iN_Max)";
}//FormCreate
//---------------------------------------------------------------------------
void __fastcall TForm1::N_MinChange(TObject *Sender)
{
 iN_Min= StrToInt(N_Min->Text);
 iN_Max= StrToInt(N_Max->Text);
 Ykazanie->Caption= "������� ����� � ���������\
 �� " + IntToStr(iN_Min) + " �� " + IntToStr(iN_Max)";
}//N_MinChange
//---------------------------------------------------------------------------
void __fastcall TForm1::N_MaxChange(TObject *Sender)
{
 iN_Min= StrToInt(N_Min->Text);
 iN_Max= StrToInt(N_Max->Text);
 Ykazanie->Caption= "������� ����� � ���������\
 �� " + IntToStr(iN_Min) + " �� " + IntToStr(iN_Max)";
}//N_MaxChange
//---------------------------------------------------------------------------
