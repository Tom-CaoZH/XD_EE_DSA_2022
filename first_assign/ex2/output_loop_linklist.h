void print2(linklist*head)
//Êä³öÑ­»·Á´±í
{  linklist *p=head->next;
   while(p!=head)
   {  std::cout<<p->data;
      p=p->next;
   }
   std::cout<<std::endl;
}
