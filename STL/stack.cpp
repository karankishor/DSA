#include<bits/stdc++.h>
using namespace std;


void explainStack(){
    stack<int> st;
    st.push(1);// {1}
    st.push(2);// {2,1}
    st.push(3);// {3,2,1}
    st.push(4);   // {4,3,2,1}
    st.push(5);  // {5,4,3,2,1}
    st.emplace(6);   // {6,5,4,3,2,1}
     stack<int> temp = st;
     while(!temp.empty()){
         cout<<temp.top()<<endl;
         temp.pop();
     }
    cout<<st.top();  // prints 6 "**st[2] is invalid ** "
    st.pop();  // st looks like {5,4,3,2,1}
cout<<endl;
    cout<<st.top();
    cout<<endl;
    cout<<st.size();
    cout<<endl;
    cout<<st.empty();


    stack<int> st1, st2;
    st1.swap(st2);
 
}   
int main()
{
 explainStack();
 return 0;

}