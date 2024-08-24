//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        if(arr.size() < 2) return -1;

        int large = INT_MIN;
        int s_large = INT_MIN;
        unordered_map<int, int> freq;

        // Calculate the frequency of each element
        for(auto it : arr) {
            freq[it]++;
            if(it > large) {
               s_large = large;
               large = it;
            } else if(it > s_large && it != large) {
                s_large = it;
            }
        }

        // Check if the second largest element has exactly two duplicates
        // and if there are only two unique elements in the array
        if(s_large != INT_MIN && freq[s_large] == 2 && freq.size() == 2) {
            return -1;
        }

        return s_large != INT_MIN ? s_large : -1;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends


//// optimal


//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++
// OPTIMAL APPROACH
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        
        // using 
        int max = arr[0];
        for(auto it: arr){
            if(it>max){
               max = it;
            }
        }
        
         return max;
    
      }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends