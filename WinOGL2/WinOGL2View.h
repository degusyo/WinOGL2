
// WinOGL2View.h : CWinOGL2View クラスのインターフェイス
//

#pragma once


class CWinOGL2View : public CView
{
protected: // シリアル化からのみ作成します。
	CWinOGL2View() noexcept;
	DECLARE_DYNCREATE(CWinOGL2View)

// 属性
public:
	CWinOGL2Doc* GetDocument() const;

// 操作
public:

// オーバーライド
public:
	virtual void OnDraw(CDC* pDC);  // このビューを描画するためにオーバーライドされます。
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 実装
public:
	virtual ~CWinOGL2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成された、メッセージ割り当て関数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // WinOGL2View.cpp のデバッグ バージョン
inline CWinOGL2Doc* CWinOGL2View::GetDocument() const
   { return reinterpret_cast<CWinOGL2Doc*>(m_pDocument); }
#endif

