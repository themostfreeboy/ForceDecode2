
// ForceDecodeDlg.h : ͷ�ļ�
//

#pragma once

// CForceDecodeDlg �Ի���
class CForceDecodeDlg : public CDialogEx
{
// ����
public:
	CForceDecodeDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_FORCEDECODE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
