// 查找列表中的最小值
linklist* findMinimum(linklist* head) {
  linklist* current = head;
  linklist* minimum = head;

  while (current != nullptr) {
    if (current->key < minimum->key) {
      minimum = current;
    }
    current = current->next;
  }

  return minimum;
}


void selectsort(linklist* head) {
  linklist* sorted = nullptr;  // 已排序的部分

  // 找到列表中的最小值，并将其插入已排序部分的末尾
  while (head != nullptr) {
    linklist* minimum = findMinimum(head);

    // 从原列表中删除该元素
    if (minimum == head) {
      head = minimum->next;
    }
    else {
      linklist* current = head;
      while (current->next != minimum) {
        current = current->next;
      }
      current->next = minimum->next;
    }

    // 将该元素插入已排序部分的末尾
    minimum->next = nullptr;
    if (sorted == nullptr) {
      sorted = minimum;
    }
    else {
      linklist* current = sorted;
      while (current->next != nullptr) {
        current = current->next;
      }
      current->next = minimum;
    }
  }
  // 将排序后的列表重新赋值给 head 指针
  head = sorted;

}