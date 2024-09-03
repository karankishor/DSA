class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum =0;
        int cnt=0; 
        for(int i=0; i<nums.size(); i++){
            for(int j=i;j<nums.size(); j++){
                sum += nums[j];

                if(sum==k){
                    cnt++;
                    sum =0;
                }

            }
        }
        return cnt;
    }
};



/// optimal solution...........

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0; 
       int presum=0;

       map<int,int> mp;
       mp[0]=1;

       for(int i=0; i<nums.size(); i++){

        presum += nums[i];


        int remove = presum - k;
        cnt += mp[remove];
        mp[presum] += 1;

       }

       return cnt;
    }
};

// Time Complexity: O(N) or O(N*logN) depending on which map data structure we are using, where N = size of the array.
// Reason: For example, if we are using an unordered_map data structure in C++ the time complexity will be O(N) but if we are using a map data structure, the time complexity will be O(N*logN). The least complexity will be O(N) as we are using a loop to traverse the array.

// Space Complexity: O(N) as we are using a map data structure.