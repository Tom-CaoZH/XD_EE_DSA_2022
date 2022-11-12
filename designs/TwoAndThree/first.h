//note: this linklist is ordered and increasing
//note: this linklist has a head node.
void DeleRange(linklist* l, datatype min, datatype max) {
    if(l == NULL) return; // If this linklsit is invalide, just return.

    linklist* tmp = l->next; // this points to the first node
    
    linklist* former = l; // This is used to trace the former node of tmp.
    linklist* garbage = NULL;
    while(tmp != NULL) {
        if(tmp->value <= min) {
            former = tmp;
            tmp = tmp->next;
        }

        // From here the tmp->value is > min
        if(tmp->value >= max) break;

        // Here, tmp->value is > min and < max.
        garbage = tmp;
        former->next = tmp->next;
        tmp = tmp->next;
        free(garbage);
    }
}
