//Êä³öµ¥Á´±í.h
using namespace std;

void printlink(linklist*head)
{  linklist *p=head->next;
   while(p!=NULL)
   {  cout<<p->data;
      p=p->next;
   }
   cout<<endl;
}