#include<bits/stdc++.h>
using namespace std;

int main()
{
  list<int> ls;
  ls.push_back(2); // {2}
  ls.emplace_back(4); // {2,4}
  
  for(auto it: ls){
      cout<<it<<" ";
  }cout<<endl;
  
  ls.push_front(5);// {5,2,4}
  ls.emplace_front(6);// {6,5,2,4}
  
    for(auto it: ls){
      cout<<it<<" ";
  }cout<<endl;
  
  // rest all funk are same as vector
  // begin, end , rbegin, rend, clear, insert, swap, size
 return 0;

}