//---------------------------------------------------------------------------

#ifndef Dvymern_Dinam_MasH
#define Dvymern_Dinam_MasH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *Matr;
        TLabel *Label1;
        TEdit *Ch_st;
        TLabel *Label2;
        TBitBtn *Pysk;
        TUpDown *UpDown1;
        TEdit *Ch_Cl;
        TUpDown *UpDown2;
        TLabel *Label3;
        void __fastcall PyskClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
