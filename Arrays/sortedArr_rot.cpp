#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSortedArrRotated(vector<int> &arr){
    int n = arr.size();
    int cnt=0;
    
    for(int i=0; i<n-1; i++){
        if(i==0 && arr[n-1]> arr[i]) cnt++;
        if(arr[i]> arr[i+1]) cnt++;
    
    }
    if(cnt>1) return false;
    return true;
}

int main()
{
    
    vector<int> v;
    v = {5,6,1,2,3,4};
    cout<<isSortedArrRotated(v);
    

 return 0;

}