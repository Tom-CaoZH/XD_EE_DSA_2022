//双向起泡排序主程序文件.cpp
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "define.h"
#include "creat.h"
#include "print.h"
#include "sort.h"

int main()
{
	const int n=10;
	sequenlist r[n];
	creat(r,n);
	print(r,n);
	dbubblesort(r,n);
	print(r,n);

	return 0;
}

