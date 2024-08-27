// BRUTE FORCE USING 2 FOR LOOPS

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> res;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};

/// TC = O(N^2)    SC = O(1)

////  USING MAP .............OPTIMAL

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> mp;
      vector<int> result;

      for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
           
           if(mp.find(complement) != mp.end()){
               result.push_back(mp[complement]);
               result.push_back(i);
               return result;
           }

           mp[nums[i]] = i;


        
      }
      return result;
    }
};


// TC = O(n)  SC = O(n)




// TC = O(n)  SC = O(n)

