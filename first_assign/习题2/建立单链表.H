void creat(linklist*&head)
//??????????
{  datatype x;
   linklist *s,*r;
   head=new linklist;
   r=head;
   cin>>x;
   while(x!='$')
   {  
	  s=new linklist;
      s->data=x;
	  r->next=s;
	  r=s;
	  cin>>x;
   }
   r->next=NULL;
}