#include <stdlib.h>
#include <iostream>
#include "type_def.h"
#include "find_point.h"
using namespace std;

void print_all_matrics(array* data) {
  std::cout <<"The input array:" << std::endl;
  for(int i = 0;i <m; ++i) {
    for(int j = 0;j < n; ++j) {
      std::cout << data->A[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main(void) {
    array* pa=new array;
    int i, j;
    for (i=0;i<m;i++)
      for (j=0;j<n;j++)
        cin>>pa->A[i][j];
    print_all_matrics(pa);
    minmax(pa);
}

