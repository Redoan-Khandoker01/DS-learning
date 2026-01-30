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
void insart_node_tail(Node* &head,Node* &tail,int value)
{
      
    Node* newnode = new Node(value);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    tail->next = newnode;
    

    
}
// //.........print fun...........//
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
     Node* tail = new Node(30);
    
    head->next = a;
    a->next = tail;

    

    insart_node_tail(head,tail,40);//.....call functoin.....//
    
    

    print_linkedlist(head);//...send to print funtion for print .........//





return 0;
}