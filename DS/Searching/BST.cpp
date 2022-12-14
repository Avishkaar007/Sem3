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
            cout<<(root->data)<<endl;
            show(root->rt);
        }
        void remove(BST<X>* root, X toDelete){
            if (root==NULL){
                return ;
            }
            else if (toDelete <root->data){
                root->left=remove(rt->left,toDelete)
            }
            else if (toDelete>root->data){
                root->right=remove(root->right,toDelete)
            }
            else
            {
                if((root->lt==NULL) && (root->rt==NULL)){
                    delete root;
                    return ;
                }
                else if (root->lt==NULL){
                    BST<X> *temp =root->rt;
                    delete root;
                    root=temp;
                }
                else if(root->rt==NULL){
                    BST<X>* temp=root->rt;
                    delete root;
                    root=temp;
                }
                else{
                    BST<X>* temp=findMin(rt->rt);
                    root->data =temp->data;
                    root->rt=remove(rt->rt,root->data);

                    BST<X>* tmp=findMax(root->rt);
                    root->data =temp->data;
                    root->rt=remove(rt->rt,root->data);
                }
            }
        }
        BST* findMin(BST<X> * root){
            BST<X>* c=root;
            while (c->lt!=NULL)
            {
                c=c->lt;
            }
            return c;
        }
        BST* findMax(BST<X> * root){
            BST<X>* c=root;
            while (c->lt!=NULL)
            {
                c=c->lt;
            }
            return c;  
        }


};

int main(){
    BST<int> tree;
    BST<int> *root=new BST<int>(10);
    // tree.insert(root,10);
    tree.insert(root,20);
    tree.insert(root,30);
    tree.insert(root,5);
    tree.insert(root,35);
    tree.remove(root,35);
    tree.show(root);

    
}