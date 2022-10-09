bool symmetry(linklist* head, stack* s) {
    int size = length(head);
    if(size == 0) return true;

    linklist* cmp_node = head->next;  // first node
    int i = 0; 
    while(i < size / 2) {
        push(s, cmp_node->data);
        cmp_node = cmp_node->next;
        i++;
    }
    if(size % 2 != 0) cmp_node = cmp_node->next;

    while(i > 0) {
        if(cmp_node->data != pop(s)) return false;
        cmp_node = cmp_node->next;
        i--;
    }

    return true;
}