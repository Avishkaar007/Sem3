#include <iostream>
#include "LinkList/LinkedList.h"
using namespace std;


template <typename D>
class Stack{
    public:

    int top;
    LinkedList<D> ll;

    Stack(){
        top=0;
    }
    void push(D data){
        ll.addToTail(data);
        top++;
    }

    void pop(){
        if (top>0){
            ll.removeTail();
            top--;
        }
        else
            cout<<"Stack is empty : "<<endl;
    }
    void show(){
        ll.reverse();
        Node<D> *tmp= ll.head;
        cout << "TOP ";
        while (tmp->next!=NULL){
            cout<<"\t"<<tmp->data<<endl;
            tmp=tmp->next;
        }

    }
};

int main(){
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(30);
    s.push(50);
    s.pop();
    s.show();
}