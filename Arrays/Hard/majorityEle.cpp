////////Majority Element 

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
           int n= nums.size();
           vector<int> res;
           int cnt=0;


           for(int i=0; i<n; i++){

            if(res.size()==0 || res[0] != nums[i]){
                cnt=0;

                for(int j=0; j<n; j++){
                    if(nums[j]== nums[i]){
                        cnt++;
                    }
                }

                if(cnt>n/3){
                    res.push_back(nums[i]);
                }


            }
            if(res.size()==2)break;
           }

           return res;
    }
};

// Time Complexity: O(N2), where N = size of the given array.
// Reason: For every element of the array the inner loop runs for N times. And there are N elements in the array. So, the total time complexity is O(N2).

// Space Complexity: O(1) as we are using a list that stores a maximum of 2 elements. The space used is so small that it can be considered constant.


// Better approach using hashing ..........


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
           int n= nums.size();

       vector<int> res;
       unordered_map<int,int> countmp;
         

         for(int i=0; i<n; i++){
            countmp[nums[i]]++;
         }


         for(auto it: countmp){
            if(it.second>n/3) res.push_back(it.first);
         }
       return res;
    }
};

///Time Complexity: O(N*logN), where N = size of the given array.
// Reason: We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. So, it results in the first term O(N*logN).
// If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2).

// Space Complexity: O(N) as we are using a map data structure. We are also using a list that stores a maximum of 2 elements. That space used is so small that it can be considered constant.


//// Optimal Approach (Extended Boyer Moore’s Voting Algorithm):


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
           int n= nums.size();
           vector<int> res;
          int cnt1=0, cnt2=0;
          int ele1=INT_MIN, ele2=INT_MIN;

          for(int i=0; i<n; i++){
            if(cnt1==0 && ele2 !=nums[i]){
                cnt1  = 1;
                ele1= nums[i];
            }
            else if(cnt2==0 && ele1 != nums[i]){
                cnt2 = 1; 
                ele2 = nums[i];
            }
            else if (nums[i]==ele1) cnt1++;
            else if (nums[i]==ele2) cnt2++;
            else {
                cnt1--; cnt2--;
            }
          }
          cnt1=0, cnt2=0;
          for(int i=0; i<n; i++){
            if (nums[i]==ele1) cnt1++;
            if (nums[i]==ele2) cnt2++;
          }
         
          int mini =( n/3)+1 ;
          if(cnt1>= mini) res.push_back(ele1);
          if(cnt2>=mini) res.push_back(ele2);

          return res;
    }
};


// ime Complexity: O(N) + O(N), where N = size of the given array.
// Reason: The first O(N) is to calculate the counts and find the expected majority elements. The second one is to check if the calculated elements are the majority ones or not.

// Space Complexity: O(1) as we are only using a list that stores a maximum of 2 elements. The space used is so small that it can be considered constant.