
// WinOGL2View.cpp : CWinOGL2View クラスの実装
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS は、プレビュー、縮小版、および検索フィルター ハンドラーを実装している ATL プロジェクトで定義でき、
// そのプロジェクトとのドキュメント コードの共有を可能にします。
#ifndef SHARED_HANDLERS
#include "WinOGL2.h"
#endif

#include "WinOGL2Doc.h"
#include "WinOGL2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWinOGL2View

IMPLEMENT_DYNCREATE(CWinOGL2View, CView)

BEGIN_MESSAGE_MAP(CWinOGL2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CWinOGL2View コンストラクション/デストラクション

CWinOGL2View::CWinOGL2View() noexcept
{
	// TODO: 構築コードをここに追加します。

}

CWinOGL2View::~CWinOGL2View()
{
}

BOOL CWinOGL2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: この位置で CREATESTRUCT cs を修正して Window クラスまたはスタイルを
	//  修正してください。

	return CView::PreCreateWindow(cs);
}

// CWinOGL2View 描画

void CWinOGL2View::OnDraw(CDC* /*pDC*/)
{
	CWinOGL2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: この場所にネイティブ データ用の描画コードを追加します。
}


// CWinOGL2View の診断

#ifdef _DEBUG
void CWinOGL2View::AssertValid() const
{
	CView::AssertValid();
}

void CWinOGL2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWinOGL2Doc* CWinOGL2View::GetDocument() const // デバッグ以外のバージョンはインラインです。
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWinOGL2Doc)));
	return (CWinOGL2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWinOGL2View メッセージ ハンドラー


void CWinOGL2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ここにメッセージ ハンドラー コードを追加するか、既定の処理を呼び出します。

	CView::OnLButtonDown(nFlags, point);
}


void CWinOGL2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ここにメッセージ ハンドラー コードを追加するか、既定の処理を呼び出します。

	CView::OnRButtonDown(nFlags, point);
}
