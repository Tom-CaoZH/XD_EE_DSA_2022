//���ַ������ĶԳƵ��������ļ�.cpp
#include<iostream>
#include "single_link_stack_type_def.h"
#include "empty_stack.h"
#include "single_link_length.h"
#include "output_single_linklist.h"
#include "set_up_single_linklist.h"
#include "push_stack.h"
#include "pop_stack.h"
#include "judge_str_sym.h"

using namespace std;

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