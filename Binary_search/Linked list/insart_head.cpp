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
    void insert_at_haead(Node*head, int val)
    {
            Node* newnode = new Node(val);
            newnode->next= head;
            head = newnode;

    }
int main()
{
      Node*Head=new Node(10);
      Node*a=new Node(20);
      Node*b=new Node(30);

      Head->next= a;
      a->next=b;

    insert_at_haead(Head,100);








return 0;
}