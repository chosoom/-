
// 20190724.h : 20190724 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMy20190724App:
// �� Ŭ������ ������ ���ؼ��� 20190724.cpp�� �����Ͻʽÿ�.
//

class CMy20190724App : public CWinApp
{
public:
	CMy20190724App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy20190724App theApp;
