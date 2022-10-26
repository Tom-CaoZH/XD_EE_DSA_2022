#include <stdlib.h>
#include <iostream>
#include "type_def.h"
#include "find_point.h"
using namespace std;

int main(void) {
    array* pa=new array;
    int i, j;
    for (i=0;i<m;i++)
      for (j=0;j<n;j++)
        cin>>pa->A[i][j];
    minmax(pa);
}

