#include <iostream>
using namespace std;

template <typename X>
class Node{
    public : 
        X data;
        Node<X> * next;
};


template <typename X>
class LinkedList{
    private:
        Node<X> *head;
    
    public:
        LinkedList(){
            head= NULL;
        }
        void addToTail(X data){
            Node<X> * newNode=new Node<X>();
            newNode->data=data;
            
            Node<X>* tmp=head;

            if ( head==NULL){
                head=newNode;
                return;
            }
           
            while ( (tmp->next) != NULL){
                tmp=tmp->next;
            }
            tmp->next=newNode;
            newNode->next=NULL;
        }

        void removeTail(){
            Node<X>* tmp=head;
            Node<X>* prev;
            while(tmp->next!=NULL){
                prev=tmp;
                tmp=tmp->next;
            }
            prev->next=NULL;
            delete tmp;
        }
        void show (){
            Node<X>* tmp = head;
            cout<<tmp->data;
            while ((tmp->next)!=NULL){
                tmp=tmp->next;
                cout<<"->"<<tmp->data<<endl;
                
                
            }
        }
};

int main(){
    LinkedList<int> ll;
    ll.addToTail(10);
    ll.addToTail(12);
    ll.removeTail();
    ll.show();
}