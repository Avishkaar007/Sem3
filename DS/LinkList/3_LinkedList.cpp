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
class LinkedList
{

public:
    Node<D> *head;
    // constructor
    LinkedList()

    {
        head = NULL;
    }

    // add front
    void addToFront(D data)
    {
        Node<D> *newNode = new Node<D>;
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void reverse()
    {
        Node<D> *curr = head;
        Node<D> *prev = NULL, *nxt = NULL;
        while (curr != NULL)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }

    // add to tail
    void addToTail(D data)
    {

        // this->show();
        Node<D> *temp = head;

        // cout<<head->data
        Node<D> *newNode = new Node<D>;
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        // cout<<newNode->data;
        newNode->next = NULL;
    }

    // empty status
    bool empty() const
    {
        return head == NULL;
    }

    // shows front element
    const D &front() const
    {
        return head->data;
    }

    const D &tail() const
    {
        Node<D> *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    // remove from Tail
    void removeTail()
    {
        Node<D> *temp = head;
        temp->next = head->next;

        if (head == NULL)
        {
            cout << "Empty Linked List ";
        }
        else if (head->next == NULL)
        {
            cout << "Now Linked List is empty ";
            delete head;
        }
        else
        {
            while (temp->next != NULL)
            {
                delete head;
            }
        }
    }

    void removeFront()
    {
        Node<D> *temp = head;
        head = head->next;
        delete temp;
    }
    // void insert(Node<D> * data  ,<D> data) // data to add
    // {
    //     Node<D> * temp =head;
    //     Node<D> * prev=temp;
    //     while(((temp->data)!=beforeThisData->data ) && (temp->next!=NULL)){
    //         prev=temp;
    //         temp=temp->next;
    //     }
    //     Node<D> * newNode=new Node<D>;
    //     prev->next=newNode;
    //     newNode->next=temp;
    // }

    // ~LinkedList()
    // {
    //     Node<D> *temp = head;

    //     while (temp->next != NULL)
    //     {
    //         temp = head->next;
    //         head=temp;
    //         delete head;
    //     }
    // }

    void show()
    {
        cout << endl;
        if (this->head != NULL)
        {
            cout << this->head->data;
            this->head = this->head->next;
            while ((this->head) != NULL)
            {
                cout << " -> " << this->head->data;
                this->head = this->head->next;
            }
            cout << endl;
        }
    }
    void input()
    {
        bool flag = true;
        while (flag)
        {
            cout << "Enter data : ";
            Node<D> *node = new Node<D>;
            cin >> node->data;
            // cout<<node->data<<endl;
            addToTail(node->data);
            cout << "DO you want to continue ? <y/n>";
            char choice;
            cin >> choice;

            if (choice == 'y' || choice == 'Y')
            {
                continue;
            }
            else
            {
                flag = false;
            }
        }
    }
};

int main()
{
    LinkedList<int> l;
    l.input();
    l.addToFront(10);
    l.addToFront(20);
    l.addToFront(30);
    l.addToTail(40);
    l.addToTail(50);
    l.removeFront();
    // l.removeFromTail();
    l.show();
}
