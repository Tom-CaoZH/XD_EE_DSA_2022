// ˳�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<stdio.h>
#include<iostream>
using namespace std;

#include "type_def.h"
#include "set_up.h"
#include "out_put.h"
#include "reverse.h"

int main()
{
	sequenlist*L;
	creat(L);
	print(L);
	invert(L);//����˳�����ֵ�ĺ���
	print(L);
	return 0;
}

