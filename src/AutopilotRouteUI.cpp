///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec  3 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "AutopilotRouteUI.h"

///////////////////////////////////////////////////////////////////////////

PreferencesDialogBase::PreferencesDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );
	
	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer8->AddGrowableCol( 0 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Mode") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer37;
	fgSizer37 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer37->SetFlexibleDirection( wxBOTH );
	fgSizer37->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_cbMode = new wxChoicebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	m_panel5 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer44;
	fgSizer44 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer44->SetFlexibleDirection( wxBOTH );
	fgSizer44->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText57 = new wxStaticText( m_panel5, wxID_ANY, _("XTE Multiplier"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	fgSizer44->Add( m_staticText57, 0, wxALL, 5 );
	
	m_sXTEP = new wxSpinCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10, 500, 100 );
	fgSizer44->Add( m_sXTEP, 0, wxALL, 5 );
	
	m_staticText561 = new wxStaticText( m_panel5, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText561->Wrap( -1 );
	fgSizer44->Add( m_staticText561, 0, wxALL, 5 );
	
	m_staticText571 = new wxStaticText( m_panel5, wxID_ANY, _("XTE Derivative"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText571->Wrap( -1 );
	fgSizer44->Add( m_staticText571, 0, wxALL, 5 );
	
	m_sXTED = new wxSpinCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 500, 0 );
	fgSizer44->Add( m_sXTED, 0, wxALL, 5 );
	
	m_staticText56 = new wxStaticText( m_panel5, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	fgSizer44->Add( m_staticText56, 0, wxALL, 5 );
	
	
	m_panel5->SetSizer( fgSizer44 );
	m_panel5->Layout();
	fgSizer44->Fit( m_panel5 );
	m_cbMode->AddPage( m_panel5, _("Standard XTE"), false );
	m_panel7 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55;
	fgSizer55 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer55->SetFlexibleDirection( wxBOTH );
	fgSizer55->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText70 = new wxStaticText( m_panel7, wxID_ANY, _("XTE Factor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer55->Add( m_staticText70, 0, wxALL, 5 );
	
	m_sXTEBoundaryP = new wxSpinCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 500, 100 );
	fgSizer55->Add( m_sXTEBoundaryP, 0, wxALL, 5 );
	
	m_staticText20 = new wxStaticText( m_panel7, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	fgSizer55->Add( m_staticText20, 0, wxALL, 5 );
	
	
	m_panel7->SetSizer( fgSizer55 );
	m_panel7->Layout();
	fgSizer55->Fit( m_panel7 );
	m_cbMode->AddPage( m_panel7, _("Boundary XTE"), false );
	m_panel8 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer50;
	fgSizer50 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer50->SetFlexibleDirection( wxBOTH );
	fgSizer50->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	m_panel8->SetSizer( fgSizer50 );
	m_panel8->Layout();
	fgSizer50->Fit( m_panel8 );
	m_cbMode->AddPage( m_panel8, _("Waypoint Bearing"), false );
	m_panel9 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_cbRoutePositionBearingMode = new wxChoicebook( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	m_panel91 = new wxPanel( m_cbRoutePositionBearingMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer19;
	fgSizer19 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer19->SetFlexibleDirection( wxBOTH );
	fgSizer19->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_sRoutePositionBearingDistance = new wxSpinCtrl( m_panel91, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 1000, 100 );
	fgSizer19->Add( m_sRoutePositionBearingDistance, 0, wxALL, 5 );
	
	m_staticText74 = new wxStaticText( m_panel91, wxID_ANY, _("Meters"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	fgSizer19->Add( m_staticText74, 0, wxALL, 5 );
	
	
	m_panel91->SetSizer( fgSizer19 );
	m_panel91->Layout();
	fgSizer19->Fit( m_panel91 );
	m_cbRoutePositionBearingMode->AddPage( m_panel91, _("By Distance"), false );
	m_panel10 = new wxPanel( m_cbRoutePositionBearingMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_sRoutePositionBearingTime = new wxSpinCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10, 2000, 0 );
	fgSizer20->Add( m_sRoutePositionBearingTime, 0, wxALL, 5 );
	
	m_staticText30 = new wxStaticText( m_panel10, wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer20->Add( m_staticText30, 0, wxALL, 5 );
	
	
	m_panel10->SetSizer( fgSizer20 );
	m_panel10->Layout();
	fgSizer20->Fit( m_panel10 );
	m_cbRoutePositionBearingMode->AddPage( m_panel10, _("By Time"), true );
	fgSizer51->Add( m_cbRoutePositionBearingMode, 1, wxEXPAND | wxALL, 5 );
	
	
	m_panel9->SetSizer( fgSizer51 );
	m_panel9->Layout();
	fgSizer51->Fit( m_panel9 );
	m_cbMode->AddPage( m_panel9, _("Route Position Bearing"), true );
	fgSizer37->Add( m_cbMode, 1, wxEXPAND | wxALL, 5 );
	
	
	sbSizer7->Add( fgSizer37, 1, wxEXPAND, 5 );
	
	
	fgSizer8->Add( sbSizer7, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Active Route Window") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer16->AddGrowableCol( 1 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer17;
	fgSizer17 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer17->SetFlexibleDirection( wxBOTH );
	fgSizer17->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer16->Add( fgSizer17, 1, wxEXPAND, 5 );
	
	wxString m_cbActiveRouteItemsChoices[] = { _("XTE"), _("BRG"), _("VMG"), _("RNG"), _("TTG"), _("ETA") };
	int m_cbActiveRouteItemsNChoices = sizeof( m_cbActiveRouteItemsChoices ) / sizeof( wxString );
	m_cbActiveRouteItems = new wxCheckListBox( this, wxID_ANY, wxDefaultPosition, wxSize( -1,120 ), m_cbActiveRouteItemsNChoices, m_cbActiveRouteItemsChoices, 0 );
	fgSizer16->Add( m_cbActiveRouteItems, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizer5->Add( fgSizer16, 1, wxEXPAND, 5 );
	
	
	fgSizer8->Add( sbSizer5, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("NMEA Sentences") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer161;
	fgSizer161 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer161->AddGrowableCol( 1 );
	fgSizer161->SetFlexibleDirection( wxBOTH );
	fgSizer161->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer171;
	fgSizer171 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer171->SetFlexibleDirection( wxBOTH );
	fgSizer171->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, _("Talker ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	fgSizer171->Add( m_staticText12, 0, wxALL, 5 );
	
	m_tTalkerID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer171->Add( m_tTalkerID, 0, wxALL, 5 );
	
	
	fgSizer161->Add( fgSizer171, 1, wxEXPAND, 5 );
	
	wxString m_cbNMEASentencesChoices[] = { _("RMB"), _("RMC"), _("APB"), _("XTE") };
	int m_cbNMEASentencesNChoices = sizeof( m_cbNMEASentencesChoices ) / sizeof( wxString );
	m_cbNMEASentences = new wxCheckListBox( this, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), m_cbNMEASentencesNChoices, m_cbNMEASentencesChoices, 0 );
	fgSizer161->Add( m_cbNMEASentences, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizer6->Add( fgSizer161, 1, wxEXPAND, 5 );
	
	
	fgSizer8->Add( sbSizer6, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Boundary") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer18->AddGrowableCol( 1 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText29 = new wxStaticText( this, wxID_ANY, _("GUID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	fgSizer18->Add( m_staticText29, 0, wxALL, 5 );
	
	m_tBoundary = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add( m_tBoundary, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizer9->Add( fgSizer18, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer56;
	fgSizer56 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer56->SetFlexibleDirection( wxBOTH );
	fgSizer56->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button22 = new wxButton( this, wxID_ANY, _("Generate"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer56->Add( m_button22, 0, wxALL, 5 );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, _("Width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer56->Add( m_staticText71, 0, wxALL, 5 );
	
	m_sBoundaryWidth = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 1, 1000, 30 );
	fgSizer56->Add( m_sBoundaryWidth, 0, wxALL, 5 );
	
	m_staticText72 = new wxStaticText( this, wxID_ANY, _("M"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	fgSizer56->Add( m_staticText72, 0, wxALL, 5 );
	
	
	sbSizer9->Add( fgSizer56, 1, wxEXPAND, 5 );
	
	
	fgSizer8->Add( sbSizer9, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer10;
	sbSizer10 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Waypoint Arrival") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer45;
	fgSizer45 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer45->SetFlexibleDirection( wxBOTH );
	fgSizer45->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_cbConfirmBearingChange = new wxCheckBox( this, wxID_ANY, _("Confirm Bearing Change"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer45->Add( m_cbConfirmBearingChange, 0, wxALL, 5 );
	
	
	sbSizer10->Add( fgSizer45, 1, wxEXPAND, 5 );
	
	
	fgSizer8->Add( sbSizer10, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Display") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer53;
	fgSizer53 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer53->SetFlexibleDirection( wxBOTH );
	fgSizer53->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_cbToolbarIcon = new wxCheckBox( this, wxID_ANY, _("Toolbar Icon"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer53->Add( m_cbToolbarIcon, 0, wxALL, 5 );
	
	
	sbSizer8->Add( fgSizer53, 1, wxEXPAND, 5 );
	
	
	fgSizer8->Add( sbSizer8, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer21->AddGrowableCol( 1 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button4 = new wxButton( this, wxID_ANY, _("Information"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer21->Add( m_button4, 0, wxALL, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();
	
	fgSizer21->Add( m_sdbSizer1, 1, wxALIGN_RIGHT|wxEXPAND, 5 );
	
	
	fgSizer8->Add( fgSizer21, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer8 );
	this->Layout();
	fgSizer8->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_cbMode->Connect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( PreferencesDialogBase::OnMode ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnInformation ), NULL, this );
	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnOk ), NULL, this );
}

PreferencesDialogBase::~PreferencesDialogBase()
{
	// Disconnect Events
	m_cbMode->Disconnect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( PreferencesDialogBase::OnMode ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnInformation ), NULL, this );
	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnOk ), NULL, this );
	
}
