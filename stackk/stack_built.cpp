#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<int> st;
int n; 
cin>>n;
//.........input..........//
for (int i = 0; i < n; i++)
{
    int value;
    cin>>value;
    st.push(value);
}

while (st.empty() == false)
{
    cout<<st.top()<<" "; 
    st.pop();
}




return 0;
}