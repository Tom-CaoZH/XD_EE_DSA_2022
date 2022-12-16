//判断二叉排序树主程序文件.cpp
#include<iostream>
#include<stdlib.h>
#include "define.h"
#include "creat.h"
#include "print.h"
#include "judge.h"

using namespace std;

int main()
{
	bitree* pb;
	pb=creattree();
	preorder(pb);
	cout<<endl;
	if(inorder(pb)) cout<<"Is binary search tree"<<endl;
	return 0;
}

