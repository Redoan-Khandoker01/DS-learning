#include<bits/stdc++.h>
using namespace std;
int main()
{


list<int> l={10,20,30}; 
list <int>l2; 
l2=l; 
list<int>l3= {500,560,600};

//  for(auto it =l.begin();it !=l.end();it++)
//  {
//     cout<<*it<<endl;
//  }
// l2.push_back(40);
// l2.push_front(0);
// l2.pop_back();
// l2.pop_front();


l2.insert(next(l2.begin(),3),l3.begin(),l3.end());
for(int val : l2)
{
    cout<<val<<" ";
}

return 0;
}