//���ַ������ĶԳƵ��������ļ�.cpp
#include<iostream.h>
#include"������˳��ջ�ṹ���Ͷ���.h"
#include"��ջ��.h"
#include"��������.h"
#include"���������.h"
#include"����������.h"
#include"˳��ջ��ջ.h"
#include"˳��ջ��ջ.h"
#include"���ַ����Ƿ����ĶԳ�.h" 
void main()
{
	linklist *head;stack *s;
	datatype str[80];
	cin>>str;
	creat(head,str);
	printlink(head);
	setnull(s);
	if(symmetry(head,s)) cout<<"�ַ���\""<<str<<"\"���ĶԳ�\n";
	else cout<<"�ַ���\""<<str<<"\"�������ĶԳ�\n";
}