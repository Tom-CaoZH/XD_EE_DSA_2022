//���������������������ļ�.cpp
#include<iostream>
#include<stdio.h>
#include"type_def.h"
#include"setup.h"
#include"output.h"
#include"exchange.h"

using namespace std;

int main()
{
	bitree*pb;
	pb=creattree();
	preorder(pb);
	cout<<endl;
	swap(pb);
	preorder(pb);
	cout<<endl;
	return 0;
}

