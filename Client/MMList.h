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

#include "ScriptEntity.h"

namespace MMScript
{
	class CMMList : public CScriptEntity
	{
	public:
		void MapToText(CString &strText, BOOL bIncludeGroup);
		void MapToCommand(CString &strCommand);

		CMMList();
		CMMList(const CMMList& src);
		CMMList(const CMMList& src, CString strSort);

		virtual ~CMMList();

		CString&		ListName()			{return m_strListName;}
		const CString&	Group() const		{return m_strGroup;}
		CStringArray&	Items()				{return m_slItems;}

		void ListName(const CString& strName)	{m_strListName = strName;}
		void Group(const CString& strGroup)		{m_strGroup = strGroup;}

	private:
		CString		m_strListName;		// User defined name of the list.
		CStringArray	m_slItems;				
		CString		m_strGroup;
	public:
		BOOL Add(LPCTSTR pszItem);
		BOOL Remove(LPCTSTR pszItem);
		BOOL Remove(int nIndex);
	};
}
