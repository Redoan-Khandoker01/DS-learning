#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; ..........type - 1
    vector<int> v(4, 5); //.....type - 2 , size = 4, value = all 5,
    cout<<"v = ";
    for (int i = 0; i < v.size(); i++)
    {   
        cout << v[i];
    }

    vector<int> v2(v); //.....type - 3 , "V" has been copyed into  "V2"
        cout<<endl<<"v2 = " ;
    for (int i = 0; i < v2.size(); i++)
    {  
       cout<<v2[i] ;
    }

    int a[5]= {1,2,3,4,5}; // type- 4,  "aryy[]" has been copyed into "C";
    vector<int> c(a,a+5);
    cout<<endl<<"a to c = ";
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i];
    }
    vector<int> v = { 1,3 ,5,8,9}; //. type  - 5;

    return 0;
}