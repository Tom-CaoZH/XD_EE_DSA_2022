//����������.h
#include "stdafx.h"
void creat(linklist* &head)
//����β�巨��������ͷ���ĵ�����
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


