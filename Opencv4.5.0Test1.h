
// Opencv4.5.0Test1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// COpencv450Test1App:
// See Opencv4.5.0Test1.cpp for the implementation of this class
//

class COpencv450Test1App : public CWinApp
{
public:
	COpencv450Test1App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern COpencv450Test1App theApp;
