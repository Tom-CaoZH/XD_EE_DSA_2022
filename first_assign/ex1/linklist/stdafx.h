// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#ifndef _WIN32_WINNT		// ����ʹ���ض��� Windows XP ����߰汾�Ĺ��ܡ�
#define _WIN32_WINNT 0x0501	// ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
#endif						

#ifdef UNICODE
 
#define _T L##
 
#define _tprintf wprintf
 
#else
 
#define _T
 
#define _tprintf printf
 
#endif  //UNICODE

#include <stdio.h>
// #include <tchar.h>
using namespace std;



// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
