
// WinOGL2.h : WinOGL2 アプリケーションのメイン ヘッダー ファイル
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"       // メイン シンボル


// CWinOGL2App:
// このクラスの実装については、WinOGL2.cpp を参照してください
//

class CWinOGL2App : public CWinApp
{
public:
	CWinOGL2App() noexcept;


// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWinOGL2App theApp;
