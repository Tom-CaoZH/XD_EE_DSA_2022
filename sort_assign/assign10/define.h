//二叉链表的结构类型定义.h
const int maxsize=1024;
typedef int keytype;
typedef struct node
{
	keytype key;
	struct node *lchild,*rchild;
}bitree;
