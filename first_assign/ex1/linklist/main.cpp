//�������������ļ�.cpp

#include <iostream>
#include<stdio.h>
#include "type_def.h"
#include "set_up.h"
#include "out_put.h"
#include "reverse.h"
int main()
{
	linklist*head;
	creat(head);
	print(head);
	invert(head);//���õ��������õĺ���
	print(head);
	return 0;
}

