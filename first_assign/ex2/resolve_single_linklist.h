int judge_data(datatype data) {
    if ((data >= 'A' && data <= 'Z') || (data >= 'a' && data <= 'z'))
    {
        return 0; //letter
    }
    else if(data >= '0' && data <= '9') {
        return 1; // digit
    }
    else {
        return 2; // other
    }
}

void resolve(linklist* head, linklist* letter , linklist* digit, linklist* other) {
    linklist* p = head->next; 
    linklist* tmp = p;
    while(p != NULL) {
        tmp = p;
        if(p->next == NULL) break; // The last node
        p = p->next;
        int judeg = judge_data(tmp->data);
        if(judeg == 0) {
            insert(letter, tmp);
        }
        else if(judeg == 1) {
            insert(digit, tmp);
        }
        else if(judeg == 2) {
            insert(other, tmp);
        }
        else {
            printf("ERROR : UNRECONGNIZED DATA.");
        }
    }

    int judeg = judge_data(p->data);
    if(judeg == 0) {
        insert(letter, p);
    }
    else if(judeg == 1) {
        insert(digit, p);
    }
    else if(judeg == 2) {
        insert(other, p);
    }
    else {
        printf("ERROR : UNRECONGNIZED DATA.");
    }
}