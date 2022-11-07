#include <iostream>
using namespace std;

template <class X>
class DNode{
    public:
        DNode<X> *back;
        DNode<X> *next;
        X data;
};
template <class X>
class DLinkedList
{

    DNode<X> *head;
    DNode<X> *tail;

    public:

        DLinkedList()
        {
            DNode<X> Head= new DNode<X>();
            DNode<X> Tail= new DNode<X>();
            
            head->next=tail;
            tail->back=head;    
            cout<<"Constructor called ";
        }
        void addToFront(X data)
        {
            DNode<X> * newNode=new DNode<X>();
            newNode->back=head;
            newNode->next=head->next;
            newNode->data=data;
            head->next=newNode;
        }
        void addToTail(X data){
            DNode<X> * newNode=new DNode<X>;
            newNode->back=tail->back;
            newNode->next=tail;
            newNode->data=data;
            tail->back=newNode;
        }

        int search(X data)
        {   
            int index=0;
            DNode<X> *tmp=head;
            while (tmp->next!=NULL)
            {   
                if (tmp->data==data)
                {
                    return index;
                }
                index++;
                tmp=tmp->next;
            }
            
        }

        void insert(X prev ,X data)
        {
            DNode<X> *tmp=head;
            while (tmp->next!=NULL)
            {   
                if (tmp->data==prev)
                {
                    DNode<X> *newNode = new DNode<X>;

                    newNode.back=tmp;
                    newNode.next=tmp->next;
                    tmp->next=newNode;
                    return;
                }
                tmp=tmp->next;
            }   
        }
        void show(){
            cout<<endl;
            if (this->head!=NULL){
                cout<<this->head->data;
                this->head=this->head->next;
                while((this->head)!=NULL){
                    cout<<" -> "<<this->head->data;
                    this->head=this->head->next;
                }
                cout<<endl;
            }
        }

        // Pops the first occurence of data
        void pop(X data){
            DNode<X> *tmp=head;
            while (tmp->next!=NULL)
            {   
                if (tmp->data==data)
                {   
                    DNode<X> *prev = new DNode<X>;
                    prev = tmp->back;
                    prev->next=tmp->next;
                    delete tmp;
                    return;
                }
                tmp=tmp->next;
            }   
        }
        void input(){
            bool flag=true;
            while(flag){
                cout<<"Enter data : ";
                X data;
                cin>>data;
                // cout<<node->data<<endl;
                addToTail(data);
                cout<<"DO you want to continue ? <y/n>";
                char choice;
                cin>>choice;
            
                if (choice=='y'|| choice =='Y'){
                    continue;
                }
                else {flag=false;}
            }
        }


};


int main(){
  
    DLinkedList<int> l;
    // l.input();
    l.addToFront(10);
    l.addToFront(20);
    l.addToFront(30);
    

}