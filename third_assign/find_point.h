// return the index of the min number(begin from 0)
int find_min(int* elem) {
    int min_index = 0;
    for(int i = 0;i < n; ++i) {
        if(elem[i] < elem[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

// check the elem[row, col] is the max number in the col
bool check_max_in_col(array* data, int elem, int col) {
    for(int i = 0;i < m; ++i) {
        if(data->A[i][col] > elem) {
            return false;
        }
    }
    return true;
}

void minmax(array* data) {
    int count = 0;
    for(int i = 0;i < m; ++i) {
        //find the min elem in every row
        int min_index_in_row = find_min(data->A[i]);
        if(check_max_in_col(data, data->A[i][min_index_in_row], min_index_in_row)) {
            count++;
            std::cout << "Find!" << std::endl;
            std::cout << "row = " << i+1 << " " << "col = " << min_index_in_row+1 << " " 
                        << "elem = " << data->A[i][min_index_in_row] << std::endl;
        }
    }
    if(count == 0) {
        std::cout << "There is no target point!" << std::endl;
    }
}
