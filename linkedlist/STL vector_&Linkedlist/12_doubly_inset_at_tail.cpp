#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value; 
    Node* next;
    Node* prev;

    Node(int value) // constructor
    {
        this->value = value;
        this->next = NULL;
        this->prev= NULL;
    }
};
void print_head( Node* head)
{
    Node * temp = head; 
    while (temp != NULL)
    {
       cout<<temp->value<<" "; 
       temp= temp->next; 
    }
    
}
void insert_at_tail(Node* tail, int value)
{
     Node* newnode=new Node(value); 
     tail->next = newnode; 
     newnode->prev= tail; 
   

}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(20);

    head->next= a; 
    a->prev= head; 

    a->next= tail; 
    tail->prev=a;
    insert_at_tail(tail, 500);
    insert_at_tail(tail, 600);
    insert_at_tail(tail, 700);
    print_head(head); 


return 0;
}