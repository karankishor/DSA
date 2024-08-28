// SORT 3 COLORS OR NUMBERS 

// APPROACH 1 - USING SORT ALGO WITH COMP - O(NlogN) and SC- O(1)- 

// APPROACH 2 - USING POINTERS ......... TC- O(N) and SC- O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n = nums.size();
       int cnt0=0,cnt1 =0, cnt2=0;

       for(int i=0; i<n; i++){
         if(nums[i]==0)cnt0++;
         if(nums[i]==1)cnt1++;
         if(nums[i]==2)cnt2++;
       }

       for(int i=0; i<cnt0; i++)nums[i] = 0;
       for(int i=cnt0; i<cnt0+cnt1; i++)nums[i] = 1;
       for(int i=cnt0+cnt1; i<n; i++)nums[i] = 2;
    }
};


// OPTIMAL APPROACH
// DUTCH NATIONAL FLAG ALGO
// USING THREEE POINTERS LOW MID AND HIGH FOR MID<=HIGH


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            } else if (nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
                // Don't increment mid here because the new value at nums[mid] needs to be checked
            } else {
                mid++;
            }
        }
    }
};

