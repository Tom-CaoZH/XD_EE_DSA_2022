//二叉树的建立.h
bitree* creattree()
{
	keytype x;
	bitree*Q[maxsize];
	int front,rear;
	bitree*root,*s;
	root=NULL;
	front=1;rear=0;
	std::cin>>x;//输入0表示虚结点，-1表示结束
	while(x!=-1)
	{
		s=NULL;
		if(x!=0)
		{
			s=new bitree;
			s->key=x;
			s->lchild=NULL;
			s->rchild=NULL;
		}
		rear++;
		Q[rear]=s;
		if(rear==1)root=s;
		else
		{
			if(s&&Q[front])
				if(rear%2==0)Q[front]->lchild=s;
				else Q[front]->rchild=s;
			if(rear%2==1)front++;
		}
		std::cin>>x;
	}
	return root;
}
