#include "单链表结构类型定义.h"

void insert_head(linklist* head, linklist* node) {
    node->next = head->next;
    head->next = node;
}

void invert(linklist* head) {
    linklist* tmp = head->next;
    // empty linklist just return
    if(tmp == NULL) return;
    head->next = NULL;
    while(tmp->next != NULL) {
        insert_head(head, tmp);
        tmp = tmp->next;
    }
}