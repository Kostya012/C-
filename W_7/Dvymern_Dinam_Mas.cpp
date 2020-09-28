//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Dvymern_Dinam_Mas.h"
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

typedef int **Yk_na_Yk_int;
void Vvod_Matr (Yk_na_Yk_int MM, int n_Str)
/////////////////////НИже не правильно...{
 for (int ii= 0; ii < n_Elem; ++ii)
  Mas[ii]= n_Elem - ii;
}//Vvod_Mas
void Vuvod_Mas (TStringGrid *Tabl, Yk_int Mas, int n_Elem)
{
 for (int ii= 0; ii < n_Elem; ++ii)
 Tabl->Cells[0][ii]= Mas[ii];
}//Vuvod_Mas
/*const int in=4;
int ix= 12, iMas[in];
Yk_int y= &ix;//занесли адрес
Yk_int z= &iMas;
Yk_int Din_M= new int[in];*/
//---------------------------------------------------------------------------
void __fastcall TForm1::PyskClick(TObject *Sender)
{
 int in= StrToInt(Vvod_n->Text);
 Tab->RowCount= in;
 Yk_int Din_M= new int [in];//Пораждён динамический массив
 Vvod_Mas(Din_M, in);//инициализируем ячейки массива
 Vuvod_Mas(Tab, Din_M, in);//вывод на экран
 delete [] Din_M;//уничтожаем массив
 Din_M= NULL;//Онулируем
}//PyskClick
//---------------------------------------------------------------------------
