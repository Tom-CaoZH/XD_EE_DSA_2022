//¶þ²æÊ÷µÄÊä³ö.h
void preorder(bitree*p)
{
	if(p!=NULL)
	{
		printf("%c",p->data);
		if(p->lchild!=NULL||p->rchild!=NULL)
		{
			printf("(");
			preorder(p->lchild);
			printf(",");
			preorder(p->rchild);
			printf(")");
		}
	}
}
