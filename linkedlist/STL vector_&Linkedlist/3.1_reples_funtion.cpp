#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v={20,30,60,40};
v.erase(v.begin()+3);
 find(v.begin(),v.end(), 20);
for (int i = 0; i < v.size(); i++)
{ 
    cout<<v[i];
}



return 0;
}