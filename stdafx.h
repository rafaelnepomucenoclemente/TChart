// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������ 
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once


#define WIN32_LEAN_AND_MEAN		// ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// �Ϻ� CString �����ڴ� ��������� ����˴ϴ�.

#pragma warning( disable : 4312)


#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
#endif

#include <afx.h>
#include <afxwin.h>         // MFC �ٽ� �� ǥ�� ���� ����Դϴ�.
#include <afxsock.h>

// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
#include <T3D.h>
#include <NetCode.h>

#include "TChartType.h"