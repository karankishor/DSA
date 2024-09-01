// longest consecutive sequence in an array


// BRUTE FORCE APPROACH

class Solution {
public:
    bool linearSearch(vector<int>& nums, int num) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == num)
                return true;
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int longest = 1;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int cnt = 1;

            while (linearSearch(nums, x + 1) == true) {
                x++;
                cnt++;
            }

            longest = max(longest, cnt);
        }
        return longest;
    }
};

// Time Complexity (TC): O(n^2)
// Space Complexity (SC): O(1)


// better sol

class Solution {
public:
  
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
         sort(nums.begin(), nums.end());
         int longest =1;
         int cnt =1;
         int lastSmaller = INT_MIN;

         for(int i=0; i<nums.size(); i++){
             
             if(nums[i]-1 == lastSmaller){
                cnt++;
                lastSmaller = nums[i];
                // This is the next element in the sequence

             }
             else if(nums[i]-1 != lastSmaller){
                cnt= 1;
              lastSmaller = nums[i];
             }
             longest = max(longest, cnt);
         }
         return longest;
    }
};
///////// not working for duplicatess....................



///OPTIMAL SOLUTION
class Solution {
public:
  
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
         
         int longest =1;
         unordered_set<int> st;

         for(int num:nums){
            st.insert(num);
         }

         for(auto it : st){
            if(st.find(it-1)== st.end()){
                int cnt =1;
                int x = it;

                while(st.find(x+1) != st.end()){
                    x++;
                    cnt++;
                }
                longest = max(longest, cnt);
            }
         }
         return longest;
    }
};

//  TC = O(n)
//  SC = O(n)
