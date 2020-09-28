//---------------------------------------------------------------------------

#ifndef SchetH
#define SchetH
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
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *Nach;
        TEdit *Konec;
        TEdit *Goriz;
        TEdit *Vert;
        TBitBtn *Pysk;
        TBitBtn *Vuxod;
        TLabel *Label7;
        TEdit *Razmer;
        TMemo *Memo1;
        void __fastcall NachChange(TObject *Sender);
        void __fastcall KonecChange(TObject *Sender);
        void __fastcall GorizChange(TObject *Sender);
        void __fastcall VertChange(TObject *Sender);
        void __fastcall RazmerChange(TObject *Sender);
        void __fastcall PyskClick(TObject *Sender);
        void __fastcall VuxodClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
