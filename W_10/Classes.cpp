//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Classes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TChel Chel;
TStud Stud;
TSotr Sotr;
TPrep Prep;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TChel::Vuvod(void)//общий метод всех классов
 {
  ShowMessage (FIO + FloatToStrF(Sym_Vupl, ffFixed, 8,2));
 }//Vuvod

void TStud::Ras_Vupl(void)
 {
  Sym_Vupl= Cen_Bal*Sr_Bal;//послед. всеми классами
 }//TStud

void TSotr::Ras_Vupl(void)
 {
  Sym_Vupl= Sym_Vupl + Razm_Prem;
 }//TSotr

void TPrep::Ras_Vupl(void)
 {
  Sym_Vupl= Sym_Vupl + Chasu * Stoim_Ch;
 }//TPrep

void TChel::Inic(String F_I_O, float Okl)
 {
  FIO= F_I_O;
  Sym_Vupl= Okl;
 }//TChel_Inic

void TStud::Inic(String F_I_O, float Sredn_B)
 {
  FIO= F_I_O;
  Sr_Bal= Sredn_B;
  TStud::Ras_Vupl();
 }//TStud_Inic

void TSotr::Inic(String F_I_O, float Okl, float Razm_Pr)
 {
  TChel::Inic(F_I_O, Okl);//это доступ к методу предок
  Razm_Prem= Razm_Pr;
  TSotr::Ras_Vupl();
 }//TSotr_Inic

void TPrep::Inic(String F_I_O, float Okl, float Razm_Pr, int Cha, float St_Chasa)
 {
  TSotr::Inic(F_I_O, Okl, Razm_Pr);//это доступ к методу предок
  Chasu= Cha;
  Stoim_Ch= St_Chasa;
  TPrep::Ras_Vupl();
 }//TPrep_Inic

//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
 Chel.Inic("ИИИ", 613.6);
 Stud.Inic("ППП", 4.7);
 Sotr.Inic("ссс", 897.35, 1911);
 Prep.Inic("ЯЯЯ", 1911, 1106, 78, 8.17);
}//FormCreate

//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
 Chel.Vuvod();//ИИИ 613.60
 Stud.Vuvod();//ППП117.5
 Sotr.Vuvod();//ССС 2808.35
 Prep.Vuvod();//ЯЯЯ 3654.92
}//BitBtn1Click
//---------------------------------------------------------------------------

