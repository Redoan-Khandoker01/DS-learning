#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value; 
    Node* next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_node_tail(Node* &head, Node* &tail, int value)
{
    Node* newnode = new Node(value);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;   // ✅ FIX
        return;
    }

    tail->next = newnode;
    tail = newnode;       // ✅ FIX
}

void print_linkedlist(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value; 
    while (true)
    {
        cin >> value;
        if(value == -1)
            break;

        insert_node_tail(head, tail, value);
    }

    print_linkedlist(head);

    return 0;
}
