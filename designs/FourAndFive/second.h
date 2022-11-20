char* StrDelete(char* S, int i, int m) {
    if(i >= strlen(S)) {
        return;
    }

    char* NewStr = (char*)malloc((strlen(S) - m)*sizeof(char))

    strncpy(NewStr, S, i - 1);
    if(i + m < strlen(S)) {
        strncpy(NewStr + i, S + i + m, strlen(S) - i - m);
    }

    return NewStr;
    

}

