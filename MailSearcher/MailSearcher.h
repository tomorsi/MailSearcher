
// MailSearcher.h : main header file for the MailSearcher application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMailSearcherApp:
// See MailSearcher.cpp for the implementation of this class
//

class CMailSearcherApp : public CWinApp
{
public:
	CMailSearcherApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMailSearcherApp theApp;
