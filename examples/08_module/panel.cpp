#include "panel.h"
#include<string>

class MyHello
{
public:
	std::string say_hello() { return "John"; }
};

/*
Class Constructor

@param wxWindow* the parent window for the Panel class
*/
Panel::Panel(wxWindow* parent) 
	: wxPanel(parent, -1)
{
	auto hello_button = new wxButton(this, -1, wxT("Hello"));
	hello_button->Bind(wxEVT_BUTTON, &Panel::on_hello, this);
}

void Panel::on_hello(wxCommandEvent & event)
{
	MyHello h;

	wxLogMessage("Hello world from wxWidgets !" + wxString(h.say_hello()));
}


