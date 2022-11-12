//交换左右子树的主程序文件.cpp
#include<iostream>
#include<stdio.h>
#include"type_def.h"
#include"setup.h"
#include"output.h"
#include"exchange.h"

using namespace std;

void main()
{
	bitree*pb;
	pb=creattree();
	preorder(pb);
	cout<<endl;
	swap(pb);
	preorder(pb);
	cout<<endl;
}

