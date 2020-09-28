//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Tekst_f.h"
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
String Isx_f= "Isxodn_f.txt",
       Rez_f= "Rezylt_f.txt";//���������� �������� �������
//---------------------------------------------------------------------------

void __fastcall TForm1::VvodClick(TObject *Sender)
{
 //�������� ������ �� �����
 Memo1->Lines->LoadFromFile(Isx_f);
 RichEdit1->Lines->LoadFromFile(Isx_f);
 ShowMessage(Memo1->Lines->Strings[0]);
 //����� 1112
 ShowMessage(Memo1->Lines->Strings[1]);
 //������
 //����� ���-�� ����� � �����
 ShowMessage("��������� " + IntToStr(Memo1->Lines->Count) + " �����");
}//VvodClick
//---------------------------------------------------------------------------

void __fastcall TForm1::SoxraniClick(TObject *Sender)
{
  Memo1->Lines->SaveToFile(Rez_f);
}//SoxraniClick
//---------------------------------------------------------------------------

/*String Isx_f= "Isxodn_f.txt",
       Rez_f= "Rezylt_f.txt";*/
//���������� � ������������� ���������
TStringList * Spisok= new TStringList;
void Zagryzka (TStringList *Nabor_Strok, string Isxod_f)
{
 try {Nabor_Strok->LoadFromFile(Isxod_f);}
 catch (...)
  {
   ShowMessage("����\" "+Isxod_f + "\" �� ������");
   Abort();
  }//catch
}//Zagryzka
//---------------------------------------------------------------------------
void __fastcall TForm1::PyskClick(TObject *Sender)
{
 Zagryzka (Spisok, Isx_f);//����������� ������ � �������� TStringList
 Spisok->SaveToFile(Rez_f);
 ShowMessage("���������" + IntToStr(Spisok->count) + "�����");
 ShowMessage(Spisok->String[0]);
 ShowMessage(Spisok->String[1]);
}//PyskClick
//---------------------------------------------------------------------------

void __fastcall TForm1::VuxodClick(TObject *Sender)
{
 delete Spisok;
 Close();
}//VuxodClick
//---------------------------------------------------------------------------

