// PRINT THE LENGTH OF THE LARGEST SUB ARRAY WITH SUM == K


// BRUTE FORCE APPROACH 
// FIND ALL POSSIBLE SUB ARRAYS AND 
// CHECK WHETHER THEY EQUAL TO K
// THEN RETURN THE LARGEST ONE


//  USING MAP // OPTIMAL .................



// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
       
         map<int, int> mp;
        mp[0] = -1;  // Initialize with sum 0 at index -1
        
        int sum = 0;
        int maxi = 0;
        
        for(int i = 0; i < N; i++) {
            sum += A[i];
            
            if(mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
            //  for modifying the lenght of subarray that sum == K
            if(mp.find(sum - K) != mp.end()) {
                maxi = max(maxi, i - mp[sum - K]);
            }
        }
        
        return maxi;
    } 

};

// TC = O(N*LOGn) SC = O(N)



// USING 2 POINTERS

// ONLY WORKING FOR POSITIVE



int right = 0, left = 0;
int maxLen = 0;
int sum = 0;

while (right < N) {
    sum += A[right];  // Include the rightmost element into sum

    // Adjust the window from the left if sum exceeds K
    while (left <= right && sum > K) {
        sum -= A[left];
        left++;
    }

    // If the current sum is exactly K, update the maxLen
    if (sum == K) {
        maxLen = max(maxLen, right - left + 1);
    }

    // Move the right pointer to expand the window
    right++;
}

return maxLen;
