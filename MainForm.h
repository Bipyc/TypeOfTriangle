//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------

#include "Triangle.h"

class Tform1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *input1;
	TEdit *input3;
	TEdit *input2;
	TLabel *labelInput1;
	TLabel *labelInput2;
	TLabel *labelInput3;
	TLabel *labelResult;
	TPanel *Panel1;
	void __fastcall inputKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall inputChange(TObject *Sender);
private:
	Triangle triangle;
    void checkTriangle(const Triangle &a);
public:
	__fastcall Tform1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tform1 *form1;
//---------------------------------------------------------------------------
#endif
