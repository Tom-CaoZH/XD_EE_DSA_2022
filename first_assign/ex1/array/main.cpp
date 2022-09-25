// 顺序表逆置.cpp : 定义控制台应用程序的入口点。
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
	invert(L);//调用顺序表逆值的函数
	print(L);
	return 0;
}

