
// ForceDecode.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CForceDecodeApp:
// �йش����ʵ�֣������ ForceDecode.cpp
//

class CForceDecodeApp : public CWinApp
{
public:
	CForceDecodeApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CForceDecodeApp theApp;

UINT proc(LPVOID pParam);