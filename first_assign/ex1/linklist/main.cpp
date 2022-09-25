//单链表逆置主文件.cpp

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
	invert(head);//调用单链表逆置的函数
	print(head);
	return 0;
}

