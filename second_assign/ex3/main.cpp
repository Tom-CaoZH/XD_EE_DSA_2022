//循环队列入队出队的主程序文件.cpp
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "type_def.h"
#include "empty.h"
#include "push_q.h"
#include "pop_q.h"

using namespace std;

void main()
{  qu *sq;
   datatype x, *p,i;
   int key;
   sq=new qu;
   setnull(sq);
   do
   {  cout<<"1.Enter Queue   2.Delete Queue   -1.Print    0.Quite:";
      cin>>key;
      switch(key)
      {  case 1:  cout<<"Enter the Data:"; cin>>x;
		          enqueue(sq,x);  break;
	     case 2:  
			      p=dequeue(sq);
		          if(p!=NULL) cout<<*p<<endl;
				  else printf("The queue is empty!\n");
		          break;
		 case -1: {if (sq->quelen==0)
					  printf("The queue is empty!\n");
			      else
			      i=0;
				  {while(i<sq->quelen)
				  {
					  printf("%d  ",sq->sequ[(sq->rear+m-sq->quelen+1+i)%m]);
					  i++;
				  }
				  printf("\n");}
				  } 
		 case 0:return;

      }
   }while(1);
}