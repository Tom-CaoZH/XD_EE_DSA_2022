// note: This is a cycle linklist and its size is > 1
//      Here is no head node and a head point , it only has a point s,
//      You need to delete the former node of s.
void DeleFormerNode(linklist* s) {
    linklist* tmp = s;
    linklist* garbage = NULL;
    while(true) {
        if(tmp->next->next == s) {
            // tmp->next is the former of s, so just delete it.
            garbage = tmp->next;
            tmp->next = tmp->next->next;
            free(garbage);
            break;
        }
        tmp = tmp->next;
    }
}

