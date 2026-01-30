#include<bits/stdc++.h>
using namespace std;
int main()
{

        vector<int> v; 
        v.push_back(10);    
        v.push_back(20);        
        v.push_back(23);          
        v.push_back(50);       
        v.push_back(80);    
        v.push_back(80);    
        v.push_back(80);        
        v.push_back(80);    
        v.push_back(80);    
 // note  -- "push_back()" this funtion push a value evry time;
        cout<<"capacity of v ="<< v.capacity()<<endl;
         cout<<"all value of v = ";
          v. resize(20,100);//............... resize vector; 
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        
        /////////////////////////////////////////////
       


    









    // vector<int> v = {10,20,30,40,50};
    // cout<<v.size()<<endl; // vector  ‍এর সাইজ দেখলাম। 

    // v.clear();            // vector cleat korlam 
    
    // v.push_back(20);

    // for (int i = 0; i < v.size(); i++)

    // {
        
    //    cout<<"value = "<<v[i]<<" ";
    // }
    
    
    

return 0;
}