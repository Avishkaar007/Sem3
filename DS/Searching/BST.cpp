#include <iostream>
using namespace std;


template <class X>
class BST{
    private:
        X data;
        BST<X> * lt,*rt;
        
    public:
        BST(){
            data=0;
            lt=NULL;
            rt=NULL;
        }
        BST(X data){
            this->data=data;
            lt=NULL;
            rt=NULL;
        }
        X search(BST<X> root, X toSearch){
            if (root == NULL || root->key == toSearch)
                return root;
    
            if (root->data < toSearch)
              return search(root->right, toSearch);
 
    return search(root->left, toSearch);
        }
        BST* insert(BST<X>* root,X value){
            if (!root){
                return new BST(value);
            }
            if (value>(root->data)){
                root->rt=insert(root->rt,value);
            }
            else if (value < root->data){
                root->lt = insert(root->lt, value);
            }
            return root;
        }
        void show(BST* root){
            if(!root){
                return ;
            }
            show(root->lt);
            cout>>(root->data)>>endl;
            show(root->rt);

        }
};

int main(){
    BST<int> tree;
    BST<int> *root=new BST<int>(10);
    tree.insert(root,10);
    tree.insert(root,20);
    tree.insert(root,30);
    tree.show(root);

    
}