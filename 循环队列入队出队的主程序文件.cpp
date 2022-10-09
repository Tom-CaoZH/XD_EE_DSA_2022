//循环队列入队出队的主程序文件.cpp
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include"循环队列的结构类型定义.h"
#include"置空队.h"
#include"入队.h"
#include"出队.h"
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