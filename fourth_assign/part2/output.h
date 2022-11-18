//¶ş²æÊ÷µÄÊä³ö.h
void preorder(bitree*p)
{
	if(p!=NULL)
	{
		std::cout<<p->data;
		if(p->lchild!=NULL||p->rchild!=NULL)
		{
			std::cout<<"(";
			preorder(p->lchild);
			if(p->rchild!=NULL)std::cout<<",";
			preorder(p->rchild);
			std::cout<<")";
		}
	}
}

void PrintBiTree(bitree *T,int n)
{
	int i;  char ch=' ';
	if (T) { 
		PrintBiTree(T->rchild,n+1);	
	    for (i=1;i<=n;++i) {printf("%5c",ch);}
		printf("%c\n", T->data);
		PrintBiTree(T->lchild,n+1);
	}
}

