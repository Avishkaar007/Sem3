#include <iostream>
using namespace std;

template <class D>
class Node
{
public:
    D data;
    Node<D> *next;
};

template <class D>
class CircularLinkedList
{
private:
    Node<D> *cursor;
public:
    CircularLinkedList(){
        cursor=NULL;
    }

    void add(D data){
        
        Node<D> *newNode = new Node<D>();
        newNode->data=data;

        if (cursor==NULL){
            newNode->next=newNode;
            cursor=newNode;
        }
        else
        {
            newNode->next=cursor->next; // 3 4 5
            cursor->next=newNode;
        }
        
    }
    void remove(){
        Node<D> * del=cursor->next;
        if (del==cursor){
            cursor=NULL;
        }
        else{
            cursor->next=del->next;
            delete del;
        }
        
    }

    void cursorNext(){
        cout<<endl<<"Cursor at : "<<cursor->next->data<<endl;
    }
    void moveCursor(){
        cursor=cursor->next;
    }
    void moveCursor(int n){
        for(int a=0;a<n;a++){
            cursor=cursor->next;
        }
    }
    void cursorAt(){
        cout<<endl<<"Cursor at : "<<cursor->data<<endl;
    }

    void show(){
        cout<<endl;
        Node<D> *curAddress=cursor;
        cout<<curAddress->data ;
        while((curAddress->next)!=cursor){
            curAddress=curAddress->next;
            cout<<" -> "<<curAddress->data ;
        }
        cout<<endl;
    }

   
};



int main(){
    CircularLinkedList<int> lst;
    lst.add(19);
    lst.add(12);
    lst.add(10);
    lst.moveCursor();
    lst.cursorAt();
    lst.show();
    lst.remove();
}