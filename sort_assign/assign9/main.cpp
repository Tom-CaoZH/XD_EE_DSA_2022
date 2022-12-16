//选择法排序主程序文件.cpp
#include<iostream>
#include "define.h"
#include "creat.h"
#include "print.h"
#include "sort.h"
int main()
{  linklist *head;
   head=creat();
   print(head);
   selectsort(head);//调用选择法排序的函数
   print(head);
   return 0;
}

