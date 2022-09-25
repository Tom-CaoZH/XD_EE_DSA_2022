

//分解单链表主程序文件.cpp
#include <iostream>
#include <stdio.h>
#include "type_def.h"
#include "set_up_single_linklist.h"
#include "output_single_linklist.h"
#include "output_loop_linklist.h"
#include "insert_in_loop_linklist.h"
#include "resolve_single_linklist.h"


int main()
{  linklist *head,*letter,*digit,*other;
   creat(head);
   print1(head);
   letter=new linklist;
   letter->next=letter;
   digit=new linklist;
   digit->next=digit;
   other=new linklist;
   other->next=other;
   resolve(head,letter,digit,other);//调用分解单链表的函数
   print2(letter);
   print2(digit);
   print2(other);
}

