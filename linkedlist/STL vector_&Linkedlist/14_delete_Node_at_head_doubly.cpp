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
void delete_at_head(Node* &head,Node* &tail)
{
    Node* deletNode = head;
    head = head->next;
    head->prev= NULL; 
    delete deletNode;


}
int main()
{
 Node* head = new Node(10);
 Node* a = new Node(20);
 Node* tail = new Node(30);
 
head->next= a; 
a->prev= head; 

a->next= tail; 
tail->prev= a; 

delete_at_head(head,tail);
print_head(head);

 

return 0;
}