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

//....................//
void insert_at_head(Node* &head,int value)
{
    Node* newnode= new Node(value); 
     newnode->next = head; 
        head->prev = newnode;
        head = newnode; 

}
int main()
{
 Node* head = new Node(10);
 Node* a = new Node(20);
 Node* b = new Node(30);
 
head->next= a; 
a->prev= head; 

a->next= b; 
b->prev= a; 
insert_at_head(head,100);
insert_at_head(head,200);
insert_at_head(head,300);

print_head(head);
 

return 0;
}