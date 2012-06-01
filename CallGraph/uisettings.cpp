///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "uisettings.h"

///////////////////////////////////////////////////////////////////////////

uisettings::uisettings( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 3, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->AddGrowableRow( 0 );
	fgSizer1->AddGrowableRow( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText_path_gprog = new wxStaticText( this, wxID_ANY, _("Select path for Gprof:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_path_gprog->Wrap( -1 );
	fgSizer1->Add( m_staticText_path_gprog, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl_path_gprof = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), wxTE_READONLY );
	fgSizer1->Add( m_textCtrl_path_gprof, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_button_select_gprof = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_button_select_gprof, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText_path_dot = new wxStaticText( this, wxID_ANY, _("Select path for Dot:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_path_dot->Wrap( -1 );
	fgSizer1->Add( m_staticText_path_dot, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl_path_dot = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), wxTE_READONLY );
	fgSizer1->Add( m_textCtrl_path_dot, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_button_select_dot = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_button_select_dot, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	mainSizer->Add( fgSizer1, 0, wxBOTTOM|wxRIGHT, 5 );
	
	wxStaticBoxSizer* sbSizer;
	sbSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Settings for CALL graph") ), wxVERTICAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, _("Resolutions:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	sbSizer->Add( m_staticText5, 0, wxALL, 5 );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer2->AddGrowableCol( 1 );
	fgSizer2->AddGrowableRow( 0 );
	fgSizer2->AddGrowableRow( 1 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, _("Node treshold (0 - 100) [%]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer2->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_spinCtrl_treshold_node = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizer2->Add( m_spinCtrl_treshold_node, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, _("Edge treshold (0 - 100) [%]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer2->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_spinCtrl_treshold_edge = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizer2->Add( m_spinCtrl_treshold_edge, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	sbSizer->Add( fgSizer2, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_staticline6 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer1->Add( m_staticline6, 0, wxEXPAND | wxALL, 5 );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, _("Options:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer1->Add( m_staticText8, 0, wxALL, 5 );
	
	sbSizer->Add( bSizer1, 0, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 2, 3, 0, 0 );
	fgSizer3->AddGrowableCol( 2 );
	fgSizer3->AddGrowableRow( 0 );
	fgSizer3->AddGrowableRow( 1 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_checkBox_Names = new wxCheckBox( this, wxID_ANY, _("Short names"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox_Names, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, _("Number of node load level colors (max 10)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	fgSizer3->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_spinCtrl_colors_node = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 10, 1 );
	fgSizer3->Add( m_spinCtrl_colors_node, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox_Parametrs = new wxCheckBox( this, wxID_ANY, _("Strip parameters   "), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox_Parametrs, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, _("Number of edge load level colors (max 10)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	fgSizer3->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_spinCtrl_colors_edge = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 10, 1 );
	fgSizer3->Add( m_spinCtrl_colors_edge, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	sbSizer->Add( fgSizer3, 1, wxEXPAND|wxBOTTOM, 5 );
	
	mainSizer->Add( sbSizer, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonOk = new wxButton( this, wxID_OK, _("&Ok"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonOk->SetDefault(); 
	bSizer2->Add( m_buttonOk, 0, wxALL, 5 );
	
	m_buttonCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_buttonCancel, 0, wxALL, 5 );
	
	mainSizer->Add( bSizer2, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxBOTTOM, 5 );
	
	this->SetSizer( mainSizer );
	this->Layout();
	mainSizer->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button_select_gprof->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( uisettings::OnButton_click_select_gprof ), NULL, this );
	m_button_select_dot->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( uisettings::OnButton_click_select_dot ), NULL, this );
	m_checkBox_Names->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( uisettings::OnCheckName ), NULL, this );
	m_checkBox_Parametrs->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( uisettings::OnCheckParam ), NULL, this );
	m_buttonOk->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( uisettings::OnButton_click_ok ), NULL, this );
	m_buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( uisettings::OnButton_click_cancel ), NULL, this );
}

uisettings::~uisettings()
{
	// Disconnect Events
	m_button_select_gprof->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( uisettings::OnButton_click_select_gprof ), NULL, this );
	m_button_select_dot->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( uisettings::OnButton_click_select_dot ), NULL, this );
	m_checkBox_Names->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( uisettings::OnCheckName ), NULL, this );
	m_checkBox_Parametrs->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( uisettings::OnCheckParam ), NULL, this );
	m_buttonOk->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( uisettings::OnButton_click_ok ), NULL, this );
	m_buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( uisettings::OnButton_click_cancel ), NULL, this );
	
}
