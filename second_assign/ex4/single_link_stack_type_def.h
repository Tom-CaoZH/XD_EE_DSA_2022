//���嵥�����ṹ����.h
typedef char datatype;
typedef struct node
{  datatype data;
   struct node *next;
}linklist;
//����˳��ջ�ṹ����
const int maxsize=40;
typedef struct
{  datatype elements[maxsize];
   int top;
}stack;