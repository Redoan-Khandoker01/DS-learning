#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {1,5,8,9,8};
    vector<int> v2 = v;
    v2.pop_back();
    for (int i = 0; i < v2.size(); i++)
    {
        cout <<v2[i]<<" ";
    }
    cout<<endl;
        v2.insert(v2.begin()+2,50);
    //..............//
        cout<<"v2 = ";
    for(int x:v2)
    {
        cout<<x<<" ";    // rage base for loop ; 
    }
    //..............//

    //... insert()...//


    // vector<int> v = {1,2,3,4,5};
    // vector<int> v2;
    // v2=v;  //1 .  v = or v.assign();
    // // v2.clear();
    // v2.push_back(50);
    // v2.pop_back();
    // v2.insert(v2.begin()+2,8);
    
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    





 


return 0;
}