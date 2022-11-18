void swap(bitree* tree) {
    if(tree == NULL) {
        return;
    }
    else {
        bitree* tmp = tree->lchild;
        tree->lchild = tree->rchild;
        tree->rchild = tmp;
        swap(tree->lchild);
        swap(tree->rchild);
    }
}