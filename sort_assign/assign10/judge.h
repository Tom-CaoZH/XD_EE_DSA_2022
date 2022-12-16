#include <stack>

bool inorder(bitree* root) {
  std::stack<bitree*> stack;
  bitree* prev = nullptr;
  while (stack.size() > 0 || root) {
    while (root) {
      stack.push(root);
      root = root->lchild;
    }
    root = stack.top();
    stack.pop();
    if (prev && root->key <= prev->key) {
      return false;
    }
    prev = root;
    root = root->rchild;
  }
  return true;
}