//ѡ�������������ļ�.cpp
#include<iostream>
#include "define.h"
#include "creat.h"
#include "print.h"
#include "sort.h"
int main()
{  linklist *head;
   head=creat();
   print(head);
   selectsort(head);//����ѡ������ĺ���
   print(head);
   return 0;
}

