//---------------------------------------------------------------------------

#ifndef Par_OkrH
#define Par_OkrH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *A;
        TEdit *B;
        TEdit *C;
        TEdit *X_Min;
        TEdit *X_Max;
        TBitBtn *Parabola;
        TBitBtn *Parabola_Tab_Pok;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TEdit *AA;
        TEdit *BB;
        TEdit *R;
        TBitBtn *Okrygnost;
        TBitBtn *Okr_Tab_Pok;
        TChart *Chart1;
        TLineSeries *Series1;
        TChart *Chart2;
        TPointSeries *Series2;
        TStringGrid *StringGrid1;
        TStringGrid *StringGrid2;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ParabolaClick(TObject *Sender);
        void __fastcall Parabola_Tab_PokClick(TObject *Sender);
        void __fastcall OkrygnostClick(TObject *Sender);
        void __fastcall Okr_Tab_PokClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
