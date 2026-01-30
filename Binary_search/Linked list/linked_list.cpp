#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value; 
    Node* next;
//...............
    //constructor

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int main()
{
    Node a(10),b(20),c(330);
    
    //.........
    a.next = &b;
    b.next = &c;
    
    
    // cout<<a.value<<endl<<b.value<<endl<<c.value;

    cout<<a.value<<endl<<a.next->value<<endl<<b.next->value;


return 0;
}