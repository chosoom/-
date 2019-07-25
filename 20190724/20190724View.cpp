
// 20190724View.cpp : CMy20190724View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_calc, &CMy20190724View::OnCalc)
END_MESSAGE_MAP()

// CMy20190724View 생성/소멸

CMy20190724View::CMy20190724View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CMy20190724View::~CMy20190724View()
{
}

BOOL CMy20190724View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CMy20190724View 그리기

void CMy20190724View::OnDraw(CDC* /*pDC*/)
{
	CMy20190724Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CMy20190724View 인쇄

BOOL CMy20190724View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CMy20190724View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CMy20190724View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CMy20190724View 진단

#ifdef _DEBUG
void CMy20190724View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20190724View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20190724Doc* CMy20190724View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20190724Doc)));
	return (CMy20190724Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20190724View 메시지 처리기


void CMy20190724View::OnCalc()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CCalcDlg calc;
	calc.DoModal();
}
