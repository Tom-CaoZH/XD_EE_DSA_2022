#include <iostream>

using namespace std;
void print(linklist*h)
//���������
{  linklist *p=h->next;
   while(p!=NULL)
   {  cout<<p->key<<" ";
      p=p->next;
   }
   cout<<endl;
}