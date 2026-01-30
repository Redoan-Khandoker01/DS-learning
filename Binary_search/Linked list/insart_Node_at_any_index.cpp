#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value) // constructor
    {
        this->value = value;
        this->next = NULL;
    }
};
void insart_node_any_place(Node* &head, int idx, int value)
{

Node* newnode = new Node(value);
Node * tem = head;
for (int i = 1; i <idx; i++)
{
    tem = tem->next;

}

newnode->next = tem->next;
tem->next= newnode;


}
// .....................//
void print_linkedlist(Node*head)
{
    Node*tem = head;
    while (tem!= NULL)
    {
       cout<<tem->value<<endl;
       tem = tem->next;
    }
    

}

int main()
{   
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next =a;
    a->next = b;
    
//.................................//

insart_node_any_place(head, 2, 100);

print_linkedlist(head);
    return 0;
}