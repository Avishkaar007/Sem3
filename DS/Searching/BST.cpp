#include <iostream>
using namespace std;

template <class X>
class Node{
    Node<X> * left;
    Node<X> * right;
    X data;
}
class Tree{
    private:
        Node<X> root;
    public:
        Tree(){
            root->left=NULL;
            root->right=NULL;
        }
}
int main(){
    return 0;
}