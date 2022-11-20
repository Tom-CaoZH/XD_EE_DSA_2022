DataType* rearrange(DataType* data, int size) {
    DataType* ret = malloc(size * sizeof(DataType));
    DataType* even = malloc(size * sizeof(DataType));
    ret_tmp = ret;
    even_tmp = even;
    int even_size = 0;
    for(int i = 0;i < size; ++i) {
        if(*data % 2 == 1) {
            *ret_tmp = *data;
            data++;
            ret_tmp++;
        }
        *even_tmp = *data;
        data++;
        even_tmp++;
        even_size++;
    }

    for(int i = 0;i < even_size; ++i) {
        *ret_tmp = *even;
        ret_tmp++;
        even++;
    }

    return ret;
}

