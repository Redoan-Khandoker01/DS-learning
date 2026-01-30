#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    *p =  100;
  cout<<p<<endl;
}
int main()
{
int x = 10;
int *p= &x;
 fun(p);

 cout<<p<<"main";

return 0;
}