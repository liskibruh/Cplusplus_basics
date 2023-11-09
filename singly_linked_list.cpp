#include <iostream>

using namespace std;

class Node
{
public:
        int data;
        Node* next;

        Node(int d)
        {
                this->data = d;
                this->next = NULL;
        }
        
        ~Node()
        {
            return;
        }
};

void insertathead(Node* &head, int d)
{
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
}

void insertattail(Node* &tail, int d)
{
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
}

void insertatpos(Node* &head, Node* &tail, int position, int d)
{
    if(position==1)
    {
        insertathead(head, d);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }
    
    if(temp->next == NULL)
    {
        insertattail(tail, d);
    }
    
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deletenode(Node* &head, int pos)
{
    if(pos==1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while(count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void search(Node* &head, int value)
{
    Node* temp = head;
    int count = 1;

    while(temp!=NULL)
    {
        if(temp->data == value)
        {
            cout << temp->data <<" value found in linked list at pos: " << count << endl;
            break;
        }

        else
        {
            temp = temp->next;
        }

        count++;
    }
}

void isempty(Node* head)
{
    if(head == NULL)
    {
        cout << "The linked list is empty." << endl;
    }

    else
    {
        cout << "The linked list is NOT empty." << endl;
    }
}

void print(Node* &head)
{
        Node* temp = head;
        while(temp != NULL)
        {
                cout << temp->data << "  ";
                temp = temp->next;
        }
        
        cout << endl;
}


int main()
{
        Node* node1 = new Node(100);
        Node* head = node1;
        Node* tail = node1;
        print(head);
        
        // insert at head
        insertathead(head, 55);
        print(head);
        
        // insert at tail
        insertattail(tail, 26);
        print(head);

        // insert at position
        insertatpos(head, tail, 1, 64);
        print(head);
        
        insertatpos(head, tail, 4, 64);
        print(head);

        // delete node
        deletenode(head, 2);
        print(head);

        // search linked list by value
        search(head, 26);

        // check if the linked list is empty
        isempty(head);

        return 0;
}
