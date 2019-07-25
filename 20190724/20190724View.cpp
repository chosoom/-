
// 20190724View.cpp : CMy20190724View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "20190724.h"
#endif

#include "20190724Doc.h"
#include "20190724View.h"
#include "CalcDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20190724View

IMPLEMENT_DYNCREATE(CMy20190724View, CView)

BEGIN_MESSAGE_MAP(CMy20190724View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_calc, &CMy20190724View::OnCalc)
END_MESSAGE_MAP()

// CMy20190724View ����/�Ҹ�

CMy20190724View::CMy20190724View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CMy20190724View::~CMy20190724View()
{
}

BOOL CMy20190724View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CMy20190724View �׸���

void CMy20190724View::OnDraw(CDC* /*pDC*/)
{
	CMy20190724Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CMy20190724View �μ�

BOOL CMy20190724View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CMy20190724View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CMy20190724View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CMy20190724View ����

#ifdef _DEBUG
void CMy20190724View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20190724View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20190724Doc* CMy20190724View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20190724Doc)));
	return (CMy20190724Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20190724View �޽��� ó����


void CMy20190724View::OnCalc()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CCalcDlg calc;
	calc.DoModal();
}
