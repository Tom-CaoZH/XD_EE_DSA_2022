void print2(linklist*head)
//????ѭ??????
{  linklist *p=head->next;
   while(p!=head)
   {  cout<<p->data;
      p=p->next;
   }
   cout<<endl;
}
