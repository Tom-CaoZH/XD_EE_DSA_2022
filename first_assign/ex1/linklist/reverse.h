void insert_head(linklist* head, linklist* node) {
    node->next = head->next;
    head->next = node;
}

void invert(linklist* head) {
    linklist* tmp = head->next;
    linklist* node;
    // empty linklist or only-one-node linklist just return
    if(tmp == NULL || (tmp != NULL && tmp->next == NULL)) return;

    head->next = NULL;
    while(tmp != NULL && tmp->next != NULL) {
        node = tmp;
        tmp = tmp->next;
        insert_head(head, node);
    }
    // The last node
    node = tmp;
    insert_head(head, node);
}