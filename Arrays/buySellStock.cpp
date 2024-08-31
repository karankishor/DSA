////////// 

// BRUTE FORCE SOLUTION


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi= INT_MIN;

        for(int i=0; i<prices.size(); i++){
           
            for(int j=i; j<prices.size(); j++){
                if(prices[i]< prices[j]){
                    maxi = max(maxi, prices[j]-prices[i]);
                };
            }
        }

        if(maxi<1){
            return 0;
        }
         return maxi;
    }
};
// Time complexity: O(n^2)

// Space Complexity: O(1)


//////// OPTIMAL SOL

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i=0; i<prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPrice);
        }

        return maxProfit;
    }
};


