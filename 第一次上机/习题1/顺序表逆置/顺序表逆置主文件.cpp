// 顺序表逆置.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<stdio.h>
#include<iostream>
using namespace std;

#include"顺序表结构类型定义.h"
#include"建立顺序表.h"
#include"输出顺序表.h"
#include"顺序表逆置.h"

int main()
{
	sequenlist*L;
	creat(L);
	print(L);
	invert(L);//调用顺序表逆值的函数
	print(L);
	return 0;
}

