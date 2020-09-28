//---------------------------------------------------------------------------

#ifndef ClassesH
#define ClassesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;

const int Cen_Bal= 25;//Стоимость балла

class TChel
 {
  //private:
    // float Sr_Bal;
  protected:
     float Sr_Bal;
     String FIO;
     float Okl;
     float Sym_Vupl;
  public:
     void Inic(String F_I_O, float Okl);//инициализация полей объекта
     void Vuvod(void);//вывод строки платёжной ведомости
 };//TChel

 class TStud:public TChel//открытое наследование
 {
  private:
     float Sr_bal;
  protected:
     void Ras_Vupl(void);//расчёт выплат
  public:
     void Inic(String F_I_O, float Sredn_B);
 };//TStud

class TSotr:public TChel
 {
  private:
     float Razm_Prem;
  protected:
     void Ras_Vupl(void);//переопределение выплат
  public:
     void Inic(String F_I_O, float Okl, float Razm_Pr);
 };//TSotr

class TPrep:public TSotr//TChel не явно наследуется
 {
  private:
     int Chasu;//величина месячной почасовой нагрузки
     float Stoim_Ch;
  protected:
     void Ras_Vupl(void);//переопределение выплат
  public:
     void Inic(String F_I_O, float Okl, float Razm_Pr, int Cha, float St_Chasa);
 };//TPrep
//---------------------------------------------------------------------------
#endif
