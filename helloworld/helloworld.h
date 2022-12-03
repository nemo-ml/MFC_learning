
// helloworld.h : main header file for the helloworld application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// ChelloworldApp:
// See helloworld.cpp for the implementation of this class
//

class ChelloworldApp : public CWinAppEx
{
public:
	ChelloworldApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern ChelloworldApp theApp;
