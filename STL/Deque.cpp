#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(5);
    
    // for(auto it: dq){
    //     cout<<it<<" ";
    // }cout<<endl;
    
    // dq.pop_back();
    // dq.pop_front();
    
   cout<< dq.back()<<endl;
    cout<<dq.front()<<endl;
  
   
    // for(auto it: dq){
    //     cout<<it<<" ";
    // }
    
  // rest all funk are same as vector
  // begin, end , rbegin, rend, clear, insert, swap, size
 return 0;

}