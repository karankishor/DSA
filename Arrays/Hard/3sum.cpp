// Find the sum of 3 element of array == 0

// BRUTE FORCE ..............

 class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if((nums[i]+nums[j]+nums[k]) ==0){
                   vector<int> temp = {nums[i], nums[j], nums[k]};
                   sort(temp.begin(), temp.end());
                   st.insert(temp);
                    }
                }
            }
           
        }
         vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

//Time Complexity: O(N3 * log(no. of unique triplets)), where N = size of the array.
// Reason: Here, we are mainly using 3 nested loops. And inserting triplets into the set takes O(log(no. of unique triplets)) time complexity. But we are not considering the time complexity of sorting as we are just sorting 3 elements every time.

// Space Complexity: O(2 * no. of the unique triplets) as we are using a set data structure and a list to store the triplets.


//BETTER SOLUTION..........

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            set<int> hashset;
            for (int j = i + 1; j < n; j++) {
                // CALCULATE THE THIRD ELEMENT
                int third = -(nums[i] + nums[j]);
                if (hashset.find(third) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

// time Complexity: O(N2 * log(no. of unique triplets)), where N = size of the array.
// Reason: Here, we are mainly using 3 nested loops. And inserting triplets into the set takes O(log(no. of unique triplets)) time complexity. But we are not considering the time complexity of sorting as we are just sorting 3 elements every time.

// Space Complexity: O(2 * no. of the unique triplets) + O(N) as we are using a set data structure and a list to store the triplets and extra O(N) for storing the array elements in another set.


//  OPTIMAL SOLUTION


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
           if(i!=0 && nums[i]==nums[i-1])  continue; 

          int j=i+1;
          int  k=n-1; 

          while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }else{
                vector<int> temp = {nums[i],nums[j],nums[k]};
                res.push_back(temp);
                j++;
                k--;

                while(j<k && nums[j]==nums[j-1])j++;
                while(j<k && nums[k]==nums[k+1])k--;
            }
          }
        }
        return res;
    }
};


// Time Complexity: O(NlogN)+O(N2), where N = size of the array.
// Reason: The pointer i, is running for approximately N times. And both the pointers j and k combined can run for approximately N times including the operation of skipping duplicates. So the total time complexity will be O(N2). 

// Space Complexity: O(no. of quadruplets), This space is only used to store the answer. We are not using any extra space to solve this problem. So, from that perspective, space complexity can be written as O(1).

