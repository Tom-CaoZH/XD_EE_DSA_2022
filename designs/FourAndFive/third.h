Char FindNonExist(Linklist* S, LinkList* T) {
    LinkList* tmp = T;
    Set<Char> value_in_T;
    if(T == NULL || S == NULL) return;

    while(tmp->next != NULL) {
        if(!value_in_T.contain(tmp->value)) {
            value_in_T.add(tmp->value);
        }
    }

    tmp = S;

    while(tmp->next != NULL) {
        if(!value_in_T.contain(tmp->value)) {
            return tmp->value;
        }
    }

    return '\0';
}

