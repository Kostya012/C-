//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Simv.h"
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

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
 char ch= '�';
 int Nomer=(unsigned char)ch;
 ShowMessage(Nomer);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
 char Ch= '�';
 Ch=(unsigned char)(Ch + 1);
 ShowMessage(Ch);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
 char Stroka[]= "������";
 ShowMessage(sizeof(Stroka));
 char *Yk_Char= "����!";
 if(Yk_Char[5]== 0)
   ShowMessage("����");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
 String Stroka= "������", *Strok= &Stroka;
 ShowMessage(Stroka.Length());//6
 ShowMessage(Strok->Length());//6
 ShowMessage(sizeof(Stroka));//4
 ShowMessage(Stroka[1]);//�
}//
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
 String S_1= "��� ",
        S_2= "��� ",
        S_3= "��� ",
        S_4= "������.",
        Rez;
        Rez= S_1 + S_2 + S_3 + S_4;
 ShowMessage(Rez);
}
//---------------------------------------------------------------------------
