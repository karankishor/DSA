#include<iostream>
using namespace std;

int main()
{
  cout<<"Enter the size of n:"<<endl;
 int n; 
 cin>> n;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>> arr[i];
  cout<<endl;
 }

 // precompute
 int hash[13] = {0};
 for(int i=0; i<n; i++){
  hash[arr[i]] += 1;
 }
cout << " no. of queries"<<endl;
 int q;
 cin>>q;
 while(q--){
  int number;
  cin>> number;
  // fetch
  cout<<hash[number]<<endl;
 }
 return 0;

}

//
// Loop Execution:
// Iteration 1 (i = 0):

// arr[0] = 2
// hash[2] += 1
// hash[] becomes {0, 0, 1, 0, 0, 0}
// Iteration 2 (i = 1):

// arr[1] = 3
// hash[3] += 1
// hash[] becomes {0, 0, 1, 1, 0, 0}
// Iteration 3 (i = 2):

// arr[2] = 2
// hash[2] += 1
// hash[] becomes {0, 0, 2, 1, 0, 0}
// Iteration 4 (i = 3):

// arr[3] = 5
// hash[5] += 1
// hash[] becomes {0, 0, 2, 1, 0, 1}
// Iteration 5 (i = 4):

// arr[4] = 3
// hash[3] += 1
// hash[] becomes {0, 0, 2, 2, 0, 1}
// Final hash[]:
// {0, 0, 2, 2, 0, 1}