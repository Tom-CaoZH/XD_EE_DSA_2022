void print2(linklist*head)
//���ѭ������
{  linklist *p=head->next;
   while(p!=head)
   {  std::cout<<p->data;
      p=p->next;
   }
   std::cout<<std::endl;
}
