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
void insart_node_tail(Node* &head,int value)
{
      
    Node* tail_node = new Node(value);
    Node* temp = head;
        while (temp->next !=NULL)
        {
            temp = temp->next;
        }
        
        temp->next = tail_node;

    
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
    Node* b = new Node(30); 
    
    head->next = a;
    a->next = b;

    

    insart_node_tail(head,40);//.....call functoin.....//
    insart_node_tail(head,50);
    insart_node_tail(head,60);
    insart_node_tail(head,70);
    insart_node_tail(head,80);
    

    print_linkedlist(head);//...send to print funtion for print .........//





return 0;
}