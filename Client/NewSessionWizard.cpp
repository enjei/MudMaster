/**************************************************************************
*  Copyright (c) 1997-2004, Kevin Cook and Aaron O'Neil
*  All rights reserved.

*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions are 
*  met:
*  
*      * Redistributions of source code must retain the above copyright 
*        notice, this list of conditions and the following disclaimer. 
*      * Redistributions in binary form must reproduce the above copyright 
*        notice, this list of conditions and the following disclaimer in 
*        the documentation and/or other materials provided with the 
*        distribution. 
*      * Neither the name of the MMGUI Project nor the names of its 
*        contributors may be used to endorse or promote products derived 
*        from this software without specific prior written permission. 
*  
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS 
*  IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED 
*  TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A 
*  PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER 
*  OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
*  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
*  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
*  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
*  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
*  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
*  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***************************************************************************/
// NewSessionWizard.cpp : implementation file
//

#include "stdafx.h"
#include "Ifx.h"
#include "NewSessionWizard.h"

// CNewSessionWizard
namespace Wizards
{
	IMPLEMENT_DYNAMIC(CNewSessionWizard, CPropertySheet)
		CNewSessionWizard::CNewSessionWizard(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
		: CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
	{
	}

	CNewSessionWizard::CNewSessionWizard(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
		:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
	{
		CommonInit();
	}

	CNewSessionWizard::~CNewSessionWizard()
	{
		CommonInit();
	}

	void CNewSessionWizard::CommonInit()
	{
		SetWizardMode();
		AddPage(&welcomePage_);
		AddPage(&mudInfoPage_);
		AddPage(&scriptPage_);
		AddPage(&completePage_);

		m_psh.dwFlags |= PSH_WIZARD97|PSH_WATERMARK|PSH_HEADER;
		m_psh.pszbmWatermark = MAKEINTRESOURCE(IDB_NEWSESSION_WATERMARK);
		m_psh.pszbmHeader = MAKEINTRESOURCE(IDB_BANNER_ICON);

		m_psh.hInstance = AfxGetInstanceHandle();

		defaultOptions_.LoadDefaults();
	}

	BEGIN_MESSAGE_MAP(CNewSessionWizard, CPropertySheet)
	END_MESSAGE_MAP()


	// CNewSessionWizard message handlers
}