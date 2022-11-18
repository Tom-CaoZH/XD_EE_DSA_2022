#include <stack>

bitree* delsubtree(bitree* tree, datatype x){
    std::stack<bitree*> _stack;
    bitree* tmp = tree;
    while(tmp != NULL || !_stack.empty()) {
        if(tmp != NULL) {
            if(tmp->data == x) {
                return tmp;
            }
            _stack.push(tmp);
            tmp = tmp->lchild;
        }
        else {
            tmp = _stack.top()->rchild;            
            _stack.pop();
        }
    }
    std::cout << "hello" << std::endl;
    return NULL;
}