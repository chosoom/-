
// 20190724View.h : CMy20190724View Ŭ������ �������̽�
//

#pragma once


class CMy20190724View : public CView
{
protected: // serialization������ ��������ϴ�.
	CMy20190724View();
	DECLARE_DYNCREATE(CMy20190724View)

// Ư���Դϴ�.
public:
	CMy20190724Doc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CMy20190724View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCalc();
};

#ifndef _DEBUG  // 20190724View.cpp�� ����� ����
inline CMy20190724Doc* CMy20190724View::GetDocument() const
   { return reinterpret_cast<CMy20190724Doc*>(m_pDocument); }
#endif

