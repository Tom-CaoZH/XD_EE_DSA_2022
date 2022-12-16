//¶ş²æÊ÷µÄÊä³ö.h
void preorder(bitree*p)
{
	if(p!=NULL)
	{
		std::cout<<p->key;
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
