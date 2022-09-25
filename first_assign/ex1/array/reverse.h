void swap(char* a, char* b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void invert(sequenlist* &head) {
    int begin = 0, end = head->last - 1;
    while(begin < end) {
        swap(&(head->data[begin]), &(head->data[end]));
        begin++, end--;
    }
}