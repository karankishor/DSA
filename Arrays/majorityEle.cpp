/// BRUTE FORCE USING 2 FOR LOOPS

 class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int cnt=0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j]==nums[i]){
                    cnt++;
                }
            }
             if(cnt> nums.size()/2){
                    return nums[i];
                }
        }
        return -1;
    }
};

// TC = O(n^2)    SC= O(1)/// T IME LIMIT EXCEEDED


/// Using map

class Solution {
public:
    int majorityElement(vector<int>& nums) {
         map<int,int> mp;
       /// STORIGN ELEMENTS IN MAP
        for(auto it:nums){
            mp[it]++;
        }
/// SEARCHING ELEMENTS IN MAP
        for(auto it: mp){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
        return -1;
    }
};

// TC = O(NlogN)    SC= O(n)


// Sol 3 

// Boyer-Moore Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt = 0;
       int element =0;

       for(int i=0; i<nums.size(); i++){

          if(cnt==0){
            cnt =1;
            element = nums[i];
          }
          else if(element == nums[i]) cnt++;
          else  cnt--;
       }
       int cnt1=0;
       for(int i=0; i<nums.size(); i++){
         if(element == nums[i]) cnt1++;
       }

       if(cnt1>nums.size()/2)return element;
      return -1;
    }
};