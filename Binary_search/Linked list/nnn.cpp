#include<bits/stdc++.h>
using namespace std;
void fun(int * &p)
{   
    
    *p = NULL;
}
int main()
{
int valu = 10;
int *ptr = &valu;
fun(ptr);
cout<<*ptr;


return 0;
}