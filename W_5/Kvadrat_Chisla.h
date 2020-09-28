//---------------------------------------------------------------------------

#ifndef Kvadrat_ChislaH
#define Kvadrat_ChislaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TEdit *N_Min;
        TEdit *N_Max;
        TUpDown *UpDown1;
        TUpDown *UpDown2;
        TLabel *Ykazanie;
        TEdit *Vvod_Chisla;
        TUpDown *UpDown3;
        TBitBtn *BitBtn1;
        TLabel *Rez;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall N_MinChange(TObject *Sender);
        void __fastcall N_MaxChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
