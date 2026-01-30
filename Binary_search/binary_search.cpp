#include<bits/stdc++.h>
using namespace std;
int main()
{
int n; 
cin>>n;
vector<int>v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i]; 
}
int value;
cin>>value;

int l =0;
int r =n-1;
int flag = 0;
for (int i = l; i < r; i++)
{
   if((l+r)/2 == value) 
   {
     flag = 1;
   }
     
}

if(flag ==1)
{
    cout<< "found";
}
else{
    cout<<"not found"; 
}
return 0;
}