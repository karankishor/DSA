#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.emplace_back(6);
  v.emplace_back(7);

  // vector<int>::iterator it = v.begin();// v.begin() points to address of first element
  // it++;
  // cout<<*(it)<<" ";

  // ways of iterations

  //  for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
  //   cout<<*(it)<<" ";
  //  }

  // for (auto it = v.begin(); it != v.end(); it++) {
  //   cout << *(it) << " ";
  // }

  // for (auto it : v) {
  //   cout << it << " ";
  // }
  // cout<<endl;

  vector<int>::iterator it = v.end(); // points to address after last element
                                      // vector<int>:: iterator it = v.rend();### not working  ???
                                      // vector<int>:: iterator it = v.rbegin();#### not working ???

  // cout<< v[0]<< " "<< v.at(0)<<endl;;

  // cout<<v.back()<< " ";

  vector<pair<int, int>> v1;
  v1.push_back({1, 2});
  v1.push_back({1, 3});
  v1.push_back({1, 4});
  v1.push_back({1, 5});

  //   for(auto it=v1.begin(); it!=v1.end(); it++){
  //     //   cout<<(*it).first<< " "<< (*it).second<<endl;
  //         //  cout<< it->first<< " " << it->second<<endl;
  //   }

  // vector of pairs

  vector<pair<int, int>> v2;
  v2.emplace_back(1, 2);
  v2.emplace_back(1, 3);
  v2.emplace_back(1, 4);
  v2.emplace_back(1, 5);
  // for(auto it=v2.begin(); it!=v2.end(); it++){
  // //   cout<<(*it).first<< " "<< (*it).second<<endl;
  // //  cout<< it->first<< " " << it->second<<endl;
  //  }

  // Multi instance of one var

  vector<int> v3(5, 100);

  // for( auto it : v3 ){
  //   cout<<it<<" ";
  // }

  // empty vector

  vector<int> v4(5);
  // for(auto it: v4){
  //   cout<<it<<" ";
  // }

  // copy vector

  vector<int> v5(4, 25);
  vector<int> v6(v5);

  // for(auto it: v6){
  //   cout<<it<<" ";
  // }

  // Deletion in Vector

  vector<int> v8 = {10, 11, 12, 13, 14, 15};

  // v8.erase(v8.begin());
  // v8.erase(v8.end());
  // v8.erase(v8.begin()+2, v8.end()); // will remove all from start
  // v8.erase(v8.begin() + 2, v8.begin() + 5);
  // // will delete [start, ending)
  // for (auto it : v8)
  // {
  //   cout << it << " ";
  // }



  // Insertion in Vector
    
    vector<int> v9(2,100); // {100,100}
    v9.insert(v9.begin(), 300);//{300,100,100}
    v9.insert(v9.begin()+1,2,10);// {300, 10, 10, 100, 100}
    
    vector<int> copy(2,50);
    v9.insert(v9.begin(), copy.begin(), copy.end());
    v9.pop_back();
    // for(auto it: v9){
    //   cout<<it<<" ";
    // }
    // cout<<v9.size()<<endl;
    vector<int>vec1 = {1,3,5,7};
    vector<int>vec2 = {2,4,6,8};
    vec1.swap(vec2);
    
    for(auto it: vec1){
        cout<<it<<" ";
    }
    cout<<endl;
     for(auto it: vec2){
        cout<<it<<" ";
    }
    
cout<<endl;

vec1.clear();// erases the entire vector
//  for(auto it: vec1){
//         cout<<it<<" ";
//     }

cout<<vec1.empty();

  return 0;
}