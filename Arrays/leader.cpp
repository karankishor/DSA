///Leaders in an Array

/// An element of the array is considered a leader if it is greater than all the elements on its right side 
//or if it is equal to the maximum element on its right side. 
// The rightmost element is always a leader.



/// BRUTE FORCE SOLUTION

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
      vector<int> ans;
      
         //Checking whether arr[i] is greater than all 
    //the elements in its right side
      for(int i=0; i<n; i++){
          bool leader = true;
          
            // If any element found is greater than current leader
        // curr element is not the leader.
          for(int j=i+1; j<n; j++){
              if(arr[j]>arr[i]){
                  leader = false;
                  break;
              }
              
          }
            // Push all the leaders in ans array.
              if(leader) ans.push_back(arr[i]);
      }
      return ans;
    }
};

// TC = O(N^2) 
// SC = O(N)


// OPTIMAL SOLUTION


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
      vector<int> ans;
      // last element of arr is always leader
      // push it in the array
      int maxi = arr[n-1];
      ans.push_back(arr[n-1]);
      
      // start traversing in array from second last element
      // check whether is it greater than all its right most elements
      
      for(int i=n-2; i>=0; i--){
          if(arr[i]>= maxi){
              ans.push_back(arr[i]);
              maxi = arr[i];
          }
      }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};
 

//  TC = O(n)
//  SC = O(n)

