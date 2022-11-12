// note: use stack to reverse this linklist
//      The return value is the reversed linklist.

linklist* reverse(linklist* l) {
    stack<linklist*> s; // creat a stack whose type is linklsit*

    if(l == NULL) return;

    linklist* tmp = l->next;
    while(tmp != NULL) {
        s.push(tmp);
        tmp = tmp->next;
    }
    
    tmp = l;
    while(!s.empty()) {
        tmp->next = s.pop();
        tmp = tmp->next;
    }
}

