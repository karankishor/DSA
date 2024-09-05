    int maxLen(vector<int>& arr, int n) {
        // Your code here
       unordered_map<int,int> mp;
       int sum=0;
       int maxlen=0;
       
       for(int i=0; i<n; i++){
           
           sum += arr[i];
           
           
           if(sum==0){
               maxlen = i+1;
           }
           
           
           if(mp.find(sum)!=mp.end()){
               maxlen = max(maxlen, i-mp[sum]);
           }else{
               mp[sum] = i;
           }
       }
       return maxlen;
    }
    
};

//Time Complexity: O(N), as we are traversing the array only once

// Space Complexity: O(N), in the worst case we would insert all array elements prefix sum into our hashmap