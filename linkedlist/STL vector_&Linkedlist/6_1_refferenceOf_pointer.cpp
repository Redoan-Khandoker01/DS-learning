#include<bits/stdc++.h>
using namespace std;
void fun (int* p)
{   
    int b = 1000; 
    p = &b;
    
    cout<<p<<endl;
}
int main()
{
int x = 10; 
int * p = &x; 

fun(p);

cout<<*p;

return 0;
}