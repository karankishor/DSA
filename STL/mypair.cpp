
#include <iostream>
using namespace std;

int main(){

  pair<int,int> p = {2,4};
  cout<<p.first<<" "<<p.second<<endl;

  pair<int, pair<int,int>> p1 = {1,{2,3}};
  cout<<p1.first<<" "<<p1.second.first<< " "<< p1.second.second<<endl;
    return 0;
}