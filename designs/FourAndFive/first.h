char* StrInsert(char* S,char* T, int i) {
    if(i > strlen(S)) {
        return;
    }

    char* NewStr = (char*)malloc((strlen(S) + strlen(T)) * sizeof(char))

    strncpy(NewStr, S, i - 1);
    strncpy(NewStr + i, T, strlen(T));
    strncpy(NewStr + i + strlen(T) + 1, S + i, strlen(S) - i + 1);
    return NewStr;

}

