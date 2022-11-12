//删除二叉树结点的主程序文件.cpp
#include<iostream>
#include<stdio.h>
#include <malloc.h>
// #include <process.h>
#include"type_def.h"
#include"setup.h"
#include"output.h"
#include"delete.h"

using namespace std;

int main()
{
	bitree*root;
	datatype x;
	root=creattree();
	//CreateBiTree(root);
    PrintBiTree(root,3);
	preorder(root);
	cout<<endl;
	cin>>x;
	root=delsubtree(root,x);
	preorder(root);
	cout<<endl;
}

