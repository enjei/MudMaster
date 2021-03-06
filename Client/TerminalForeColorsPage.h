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
#pragma once

#include "ColorButton.h"
#include "Colors.h"
#include "BtnST.h"

class COptions;

class CTerminalForeColorsPage 
	: public CPropertyPage
{
// Construction
public:
	CTerminalForeColorsPage(COptions &options);
	~CTerminalForeColorsPage();

	COLORREF m_crTempForeColors[MudmasterColors::MAX_FORE_COLORS];
	COLORREF m_crTempBackColors[MudmasterColors::MAX_BACK_COLORS];

	CButtonST m_btnFore[MudmasterColors::MAX_FORE_COLORS];
	CButtonST m_btnBack[MudmasterColors::MAX_BACK_COLORS];
	//CMMColorButton m_btnFore[MudmasterColors::MAX_FORE_COLORS];
	//CMMColorButton m_btnBack[MudmasterColors::MAX_BACK_COLORS];

// Dialog Data
	//{{AFX_DATA(CTerminalForeColorsPage)
	enum { IDD = IDD_TERMINAL_FORE_COLORS };
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CTerminalForeColorsPage)
	public:
	virtual void OnOK();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CTerminalForeColorsPage)
	virtual BOOL OnInitDialog();
	afx_msg void OnForeBlack();
	afx_msg void OnForeBlue();
	afx_msg void OnForeBrown();
	afx_msg void OnForeCyan();
	afx_msg void OnForeDarkgray();
	afx_msg void OnForeGray();
	afx_msg void OnForeGreen();
	afx_msg void OnForeLightblue();
	afx_msg void OnForeLightcyan();
	afx_msg void OnForeLightgreen();
	afx_msg void OnForeLightmagenta();
	afx_msg void OnForeLightred();
	afx_msg void OnForeMagenta();
	afx_msg void OnForeRed();
	afx_msg void OnForeWhite();
	afx_msg void OnForeYellow();
	afx_msg void OnBackBlack();
	afx_msg void OnBackBlue();
	afx_msg void OnBackBrown();
	afx_msg void OnBackCyan();
	afx_msg void OnBackGray();
	afx_msg void OnBackGreen();
	afx_msg void OnBackMagenta();
	afx_msg void OnBackRed();

	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	COptions &_options;
	void ColorPick(int nColor, bool back);
};