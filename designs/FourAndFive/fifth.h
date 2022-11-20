void print_helper(int* T, int index, int size) {
    if(index == size -1) return;

    std::cout << T[index] << std::endl;

    print_helper(T, index + 1, size);
}

void PrintWithoutLoop(int* T, int size) {
    print_helper(T, 0, size);
}

