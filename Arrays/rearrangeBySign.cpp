// Rearrange Array Elements by Sign
// Optimal

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> v(nums.size());
       int posindex=0;
       int negindex=1;

       for(int num:nums){
        if(num>0){
            if(posindex < nums.size()){
                v[posindex]=num;
                posindex+=2;
            }
        }
        else if(num<0){
            if(negindex < nums.size() ){
                    v[negindex]= num;
                    negindex+=2;
            }
        }
       }

        return v;
    }
};

// TC = O(n)    SC=O(n)