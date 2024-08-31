// Maximum Score from Subarray Minimums

// Input : arr[] = [4, 3, 1, 5, 6]
// Output : 11
// Explanation : Subarrays with smallest and second smallest are:- [4, 3] smallest = 3,second smallest = 4
// [4, 3, 1] smallest = 1, second smallest = 3
// [4, 3, 1, 5] smallest = 1, second smallest = 3
// [4, 3, 1, 5, 6] smallest = 1, second smallest = 3
// [3, 1] smallest = 1, second smallest = 3
// [3, 1, 5] smallest = 1, second smallest = 3
// [3, 1, 5, 6] smallest = 1, second smallest = 3
// [1, 5] smallest = 1, second smallest = 5
// [1, 5, 6] smallest = 1, second smallest = 5
// [5, 6] smallest = 5, second smallest = 6
// Maximum sum among all above choices is, 5 + 6 = 11.

class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int maxi= INT_MIN;
        for(int i=0; i<arr.size(); i++){
            maxi = max(arr[i]+arr[i-1], maxi);
        }
        
        return maxi;
    }
};


// TC =>>>>>>>>>............. O(n)  SC=>>>>>>>>>>>>O(1)