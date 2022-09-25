void print1(linklist*head)
//Êä³öµ¥Á´±í
{  linklist *p=head->next;
   while(p!=NULL)
   {  std::cout<<p->data;
      p=p->next;
   }
   std::cout<<std::endl;
}