#pragma once


// CCalcDlg ��ȭ �����Դϴ�.

class CCalcDlg : public CDialog
{
	DECLARE_DYNAMIC(CCalcDlg)

public:
	CCalcDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CCalcDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_calc };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString textBox;
	afx_msg void OnClicked1();
	afx_msg void OnClicked2();
	afx_msg void OnClicked3();
	afx_msg void OnClicked4();
	afx_msg void OnClicked5();
	afx_msg void OnClicked6();
	afx_msg void OnClicked7();
	afx_msg void OnClicked8();
	afx_msg void OnClicked9();
	afx_msg void OnClicked0();
	afx_msg void OnClickedAdd();
	afx_msg void OnClickedMinus();
	afx_msg void OnClickedMulti();
	afx_msg void OnClickedDivide();
	afx_msg void OnClickedClear();
	afx_msg void OnClickedResult();
	int num1;
	int num2;
	int m_ee;
	int cnt;
	bool eeClicked;
};
