// MegaGuiCHN.h : MegaGuiCHN DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMegaGuiCHNApp
// �йش���ʵ�ֵ���Ϣ������� MegaGuiCHN.cpp
//

class CMegaGuiCHNApp : public CWinApp
{
public:
	CMegaGuiCHNApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};