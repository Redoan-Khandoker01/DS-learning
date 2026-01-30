#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value; 
    Node* next;

    Node(int value) // constructor
    {
        this->value = value;
        this->next = NULL;
    }
};
//..........insert Funtion.........//
void insert_at_head(Node* &head, int value)
{
    Node* newnode= new Node(value);
    newnode->next= head; 
    head = newnode;
    
}
//..........print node funtion.......//
void printnodefun( Node *head)
{   
     Node* temp = head; 


   while(temp != NULL)
   {
    cout<<temp->value<<endl;
    temp = temp->next; 
   }

}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    
      //....keep next......//
    head->next = a;
    a->next=b;

    insert_at_head(head,200);
    insert_at_head(head,300);
    insert_at_head(head,400);
    printnodefun(head);

  
    
    //.............//


return 0;
}