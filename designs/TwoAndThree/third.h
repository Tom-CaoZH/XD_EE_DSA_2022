// note: this linklist has head node and is decreasing.
//      we need to inset x and keep its order.

void insert(linklist* l, datatype x) {
    if(l == NULL) return; // Invalid linklist, just return.
    
    linklist* tmp = l->next; // Get the first node

    linklist* former = l;
    linklist* NewNode;
    NewNode->value = x;
    bool done = false;
    while(tmp != NULL) {
        if(x < tmp->value) {
            former = tmp;
            tmp = tmp->next;
        }

        former->next = NewNode;
        NewNode->next = tmp;
        done = true;
    }

    if(!done) {
        former->next = NewNode;
        NewNode->next = NULL;
    }
}

