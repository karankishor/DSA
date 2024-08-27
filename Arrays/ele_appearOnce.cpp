//FINDING THE ELEMENT THAT APPEARS ONLY ONCE IN AN ARRAY

// USING NESTED LOOPS


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; i++){
            int num = nums[i];
            int cnt =0;
            for(int j=0; j<n; j++){
                if(nums[j]==num){
                    cnt++;
                }
                 
            }
            if(cnt==1) return num;
    }
    return -1;
    }
};

// TC = O(n^2) SC = O(n)


/// USING HASHMAP

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();// size of the arr

        // declaring hashmap
        // and hashing the arr
        map<int, int > mp;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        // finding the single element in map

        for(auto it: mp){
            if(it.second==1) return it.first;
        }
        return -1;

    }
};

// Time Complexity: O(N*logM) + O(M), where M = size of the map i.e. M = (N/2)+1. N = size of the array.
// Reason: We are inserting N elements in the map data structure and insertion takes logM time(where M = size of the map). So this results in the first term O(N*logM). The second term is to iterate the map and search the single element. In Java, HashMap generally takes O(1) time complexity for insertion and search. In that case, the time complexity will be O(N) + O(M).

// Note: The time complexity will be changed depending on which map data structure we are using. If we use unordered_map in C++, the time complexity will be O(N) for the best and average case instead of O(N*logM). But in the worst case(which rarely happens), it will be nearly O(N2).

// Space Complexity: O(M) as we are using a map data structure. Here M = size of the map i.e. M = (N/2)+1.


// OPTIMAL SOLUTION USING XOR OPERATION

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();// size of the arr
        // xor of all elements
        int xorr =0;
        for(int i=0; i<n; i++){
            xorr = xorr^nums[i];
        }
        return xorr;

    }
};

// tc = O(N) SC = O(1)