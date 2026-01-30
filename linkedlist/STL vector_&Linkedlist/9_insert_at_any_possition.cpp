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
void insert_at_any_possiton(Node* &head,int indx, int value)
{
   
   
    
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

  insert_at_any_possiton(head,2, 100);

    printnodefun(head);

  
    
    //.............//


return 0;
}