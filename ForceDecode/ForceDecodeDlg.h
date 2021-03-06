
// ForceDecodeDlg.h : 头文件
//

#pragma once

// CForceDecodeDlg 对话框
class CForceDecodeDlg : public CDialogEx
{
// 构造
public:
	CForceDecodeDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_FORCEDECODE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBfolder();
	afx_msg void OnBnClickedBkey();
	afx_msg void OnBnClickedBdecode();
	afx_msg void OnBnClickedBexit();
	int FindFile(CString Curdir);
};
