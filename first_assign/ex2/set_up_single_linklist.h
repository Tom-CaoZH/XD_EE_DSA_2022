void creat(linklist*&head)
//����������
{  datatype x;
   linklist *s,*r;
   head=new linklist;
   r=head;
   std::cin>>x;
   while(x!='$')
   {  
	  s=new linklist;
      s->data=x;
	  r->next=s;
	  r=s;
	  std::cin>>x;
   }
   r->next=NULL;
}