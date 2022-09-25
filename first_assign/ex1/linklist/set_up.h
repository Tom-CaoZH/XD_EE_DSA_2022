//建立单链表.h
#include "stdafx.h"
void creat(linklist* &head)
//采用尾插法建立具有头结点的单链表
{
	char ch;
	linklist *s,*r;
	head=new linklist;
	head->next = NULL;
	r=head;
	while((ch=getchar())!='*')
	{
		s=new linklist;
		s->data=ch;
		s->next = NULL;
		r->next=s;
		r=s;
	}
	r->next=NULL;
}


