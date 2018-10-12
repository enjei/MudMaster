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
// MusicScript.cpp: implementation of the CMusicScript class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ifx.h"
#include "dxutil.h"
#include "MusicScript.h"

//#ifndef MM2K6_NODIRECTSOUND

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMusicScript::CMusicScript(IDirectMusicPerformance8* pPerformance, IDirectMusicLoader8* pLoader, IDirectMusicScript8* pScript)
{
    m_pPerformance = pPerformance;
    m_pLoader      = pLoader;
    m_pScript      = pScript;
}

CMusicScript::~CMusicScript()
{
    if( m_pLoader )
    {
        // Tell the loader that this object should now be released
        m_pLoader->ReleaseObjectByUnknown( m_pScript );
        m_pLoader = NULL;
    }

    SAFE_RELEASE( m_pScript ); 
    m_pPerformance = NULL;
}

//#endif /* MM2K6_NODIRECTSOUND */