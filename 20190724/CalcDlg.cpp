// CalcDlg.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "20190724.h"
#include "CalcDlg.h"
#include "afxdialogex.h"


// CCalcDlg 대화 상자입니다.

IMPLEMENT_DYNAMIC(CCalcDlg, CDialog)

CCalcDlg::CCalcDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_calc, pParent)
	, textBox(_T(""))
	, num1(0)
	, num2(0)
	, m_ee(0)
	, cnt(1)
	, eeClicked(false)
{

}

CCalcDlg::~CCalcDlg()
{
}

void CCalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_text, textBox);
}


BEGIN_MESSAGE_MAP(CCalcDlg, CDialog)
	ON_BN_CLICKED(IDC_1, &CCalcDlg::OnClicked1)
	ON_BN_CLICKED(IDC_2, &CCalcDlg::OnClicked2)
	ON_BN_CLICKED(IDC_3, &CCalcDlg::OnClicked3)
	ON_BN_CLICKED(IDC_4, &CCalcDlg::OnClicked4)
	ON_BN_CLICKED(IDC_5, &CCalcDlg::OnClicked5)
	ON_BN_CLICKED(IDC_6, &CCalcDlg::OnClicked6)
	ON_BN_CLICKED(IDC_7, &CCalcDlg::OnClicked7)
	ON_BN_CLICKED(IDC_8, &CCalcDlg::OnClicked8)
	ON_BN_CLICKED(IDC_9, &CCalcDlg::OnClicked9)
	ON_BN_CLICKED(IDC_0, &CCalcDlg::OnClicked0)
	ON_BN_CLICKED(IDC_add, &CCalcDlg::OnClickedAdd)
	ON_BN_CLICKED(IDC_minus, &CCalcDlg::OnClickedMinus)
	ON_BN_CLICKED(IDC_multi, &CCalcDlg::OnClickedMulti)
	ON_BN_CLICKED(IDC_divide, &CCalcDlg::OnClickedDivide)
	ON_BN_CLICKED(IDC_clear, &CCalcDlg::OnClickedClear)
	ON_BN_CLICKED(IDC_result, &CCalcDlg::OnClickedResult)
END_MESSAGE_MAP()


// CCalcDlg 메시지 처리기입니다.


void CCalcDlg::OnClicked1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1 * cnt + 1;
	else
		num2 = num1 * cnt + 1;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("1");
	UpdateData(FALSE);
	
}


void CCalcDlg::OnClicked2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1*cnt +2;
	else
		num2 = num2*cnt+2;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("2");
	UpdateData(FALSE);
}


void CCalcDlg::OnClicked3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1 * cnt + 3;
	else
		num2 = num2 * cnt + 3;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("3");
	UpdateData(FALSE);
}


void CCalcDlg::OnClicked4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1 * cnt + 4;
	else
		num2 = num2 * cnt + 4;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("4");
	UpdateData(FALSE);
}


void CCalcDlg::OnClicked5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1 * cnt + 5;
	else
		num2 = num2 * cnt + 5;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("5");
	UpdateData(FALSE);
}


void CCalcDlg::OnClicked6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1 * cnt + 6;
	else
		num2 = num2 * cnt + 6;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("6");
	UpdateData(FALSE);
}


void CCalcDlg::OnClicked7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1 * cnt + 7;
	else
		num2 = num2 * cnt + 7;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("7");
	UpdateData(FALSE);
}


void CCalcDlg::OnClicked8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1 * cnt + 8;
	else
		num2 = num2 * cnt + 8;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("8");
	UpdateData(FALSE);
}


void CCalcDlg::OnClicked9()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false)
		num1 = num1 * cnt + 9;
	else
		num2 = num2 * cnt + 9;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("9");
	UpdateData(FALSE);
}


void CCalcDlg::OnClicked0()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (textBox == "")
		return;
	if (eeClicked == false)
		num1 = num1 * cnt;
	else
		num2 = num2 * cnt;
	cnt *= 10;
	UpdateData(TRUE);
	textBox += _T("0");
	UpdateData(FALSE);

}


void CCalcDlg::OnClickedAdd()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == true) {
		MessageBox(_T("잘못된 연산입니다."), _T("Information"), MB_ICONINFORMATION);
		return;
	}
	eeClicked = true;
	cnt = 1;
	m_ee = IDC_add;
	UpdateData(TRUE);
	textBox += _T("+");
	UpdateData(FALSE);
}


void CCalcDlg::OnClickedMinus()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == true) {
		MessageBox(_T("잘못된 연산입니다."), _T("Information"), MB_ICONINFORMATION);
		return;
	}
	eeClicked = true;
	cnt = 1;
	m_ee = IDC_minus;
	UpdateData(TRUE);
	textBox += _T("-");
	UpdateData(FALSE);
}


void CCalcDlg::OnClickedMulti()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == true) {
		MessageBox(_T("잘못된 연산입니다."), _T("Information"), MB_ICONINFORMATION);
		return;
	}
	eeClicked = true;
	cnt = 1;
	m_ee = IDC_multi;
	UpdateData(TRUE);
	textBox += _T("*");
	UpdateData(FALSE);
}


void CCalcDlg::OnClickedDivide()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == true) {
		MessageBox(_T("잘못된 연산입니다."), _T("Information"), MB_ICONINFORMATION);
		return;
	}
	eeClicked = true;
	cnt = 1;
	m_ee = IDC_divide;
	UpdateData(TRUE);
	textBox += _T("/");
	UpdateData(FALSE);
}


void CCalcDlg::OnClickedClear()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	eeClicked = false;
	num1 = 0;
	num2 = 0;
	cnt = 1;
	UpdateData(TRUE);
	textBox = "";
	UpdateData(FALSE);
}


void CCalcDlg::OnClickedResult()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (eeClicked == false || num1 ==0||num2==0) {
		MessageBox(_T("잘못된 연산입니다."), _T("Information"), MB_ICONINFORMATION);
		return;
	}
	eeClicked = false;
	int a;
	CString result;
	cnt = 1;
	switch (m_ee)
	{
	case IDC_add:
		result.Format(_T("\r\n=%d"), num1 + num2);
		break;
	case IDC_minus:
		result.Format(_T("\r\n=%d"), num1 - num2);
		break;
	case IDC_multi:
		result.Format(_T("\r\n=%d"), num1 * num2);
		break;
	case IDC_divide:
		result.Format(_T("\r\n=%d"), num1 / num2);
		break;
	default:
		break;
	}
	UpdateData(TRUE);
	textBox += result;
	UpdateData(FALSE);
}
