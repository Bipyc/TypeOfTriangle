//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <iostream>

#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

#include "config.h"


Tform1 *form1;

//---------------------------------------------------------------------------
__fastcall Tform1::Tform1(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall Tform1::inputKeyPress(TObject *Sender, System::WideChar &Key)
{
	TEdit* edit = dynamic_cast<TEdit*>(Sender);

	if ( !(Key >= '0' && Key <= '9') && Key != VK_BACK ) {
		Key = 0;
		return;
	}

	if (edit->SelStart == 0 && Key == '0') {
		Key = 0;
		return;
	}

	if (Key == VK_BACK &&
			(edit->Text.Length() > 1) &&
			(edit->SelStart == 1) &&
			(edit->Text[2]=='0')
			) {
		Key = 0;
		return;
	}
}
//---------------------------------------------------------------------------

void __fastcall Tform1::inputChange(TObject *Sender)
{
	TEdit* edit = dynamic_cast<TEdit*>(Sender);
	String strValue = edit->Text;
	if (strValue.Length() > 0 ) {
		unsigned int value = strValue.ToInt();
		triangle.setValue(edit->Tag, value);
	}
	else {
		triangle.setValue(edit->Tag, 0);
	}

	checkTriangle( triangle );
}
//---------------------------------------------------------------------------

void Tform1::checkTriangle(const Triangle& a)
{
	if (a.getSide1() == 0) {
		labelResult->Font->Color = clRed;
		labelResult->Caption = STR_INPUT_1;
	}
	else if (a.getSide2() == 0) {
		labelResult->Font->Color = clRed;
		labelResult->Caption = STR_INPUT_2;
	}
	else if (a.getSide3() == 0) {
		labelResult->Font->Color = clRed;
		labelResult->Caption = STR_INPUT_3;
	}
	else {
		labelResult->Font->Color = clBlue;//00A00000; //Color
		labelResult->Caption = a.getType();
	}	
}
// ƒобавить меню выбора при правым щелчке мышки
