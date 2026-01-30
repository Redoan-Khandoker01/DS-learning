#include<bits/stdc++.h>
using namespace std;

void recuriton(int i, int n)
{
    if(i>n)
    {
        return;
    }
recuriton(i+1,n);
         cout<< i<<" ";
        
}
int main()
{
int n; 
cin>>n;
recuriton(1,n);




return 0;
}