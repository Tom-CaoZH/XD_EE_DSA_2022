void print1(linklist*head)
//���������
{  linklist *p=head->next;
   while(p!=NULL)
   {  std::cout<<p->data;
      p=p->next;
   }
   std::cout<<std::endl;
}