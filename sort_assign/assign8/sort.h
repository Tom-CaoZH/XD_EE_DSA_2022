#include <iostream>
#include <algorithm>

using namespace std;

void dbubblesort(sequenlist r[],int n) {
  bool swapped = true;
  for (int i = 0; i < n && swapped; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (r[j].key > r[j + 1].key) {
        swap(r[j], r[j + 1]);
        swapped = true;
      }
    }
    print(r, n);

    if (!swapped) {
      break;
    }

    swapped = false;
    for (int j = n - i - 1; j > i; j--) {
      if (r[j].key < r[j - 1].key) {
        swap(r[j], r[j - 1]);
        swapped = true;
      }
    }
    print(r, n);
  }
}