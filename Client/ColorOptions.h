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

namespace SerializedOptions
{
	class CColorOptions
	{
	public:
		CColorOptions();
		CColorOptions(const CColorOptions &src);
		CColorOptions &operator=(const CColorOptions &src);

		HRESULT Save(LPCTSTR lpszPathName);
		HRESULT Read(LPCTSTR lpszPathName);
		///////////////////////////////////////////////////////////////////
		// Color Customizations
		///////////////////////////////////////////////////////////////////
		// Accessors
		BYTE GetChatForeColor() {return static_cast<BYTE>(m_nChatFore);}
		BYTE GetChatBackColor() {return static_cast<BYTE>(m_nChatBack);}
		BYTE GetMessageForeColor() {return static_cast<BYTE>(m_nMessageFore);}
		BYTE GetMessageBackColor() {return static_cast<BYTE>(m_nMessageBack);}

		// Mutators
		void SetChatForeColor(BYTE nFore)  {m_nChatFore			= static_cast<int>(nFore);}
		void SetChatBackColor(BYTE nBack) {m_nChatBack			= static_cast<int>(nBack);}
		void SetMessageForeColor(BYTE nFore) {m_nMessageFore	= static_cast<int>(nFore);}
		void SetMessageBackColor(BYTE nBack) {m_nMessageBack	= static_cast<int>(nBack);}

	private:
		void Swap(CColorOptions &src);

		int m_nChatFore;
		int m_nChatBack;
		int m_nMessageFore;
		int m_nMessageBack;
	};
}