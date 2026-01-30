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

//..................//
void insart_node(Node* &head,int value)
{

    Node*newnode = new Node(value);
    newnode->next= head;
    head = newnode;
}
//.........print fun...........//
void print_linkedlist(Node*head)
{
    Node*tem = head;
    while (tem!= NULL)
    {
       cout<<tem->value<<endl;
       tem = tem->next;
    }
    

}

//...................//
int main()
{

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30); 
    
    head->next = a;
    a->next = b;

    

    insart_node(head,100);//.....call functoin.....//
    insart_node(head,110);
    insart_node(head,150);

    print_linkedlist(head);//...send to print funtion for print .........//





return 0;
}