// ˳�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<stdio.h>
#include<iostream>
using namespace std;

#include"˳���ṹ���Ͷ���.h"
#include"����˳���.h"
#include"���˳���.h"
#include"˳�������.h"

int main()
{
	sequenlist*L;
	creat(L);
	print(L);
	invert(L);//����˳�����ֵ�ĺ���
	print(L);
	return 0;
}

