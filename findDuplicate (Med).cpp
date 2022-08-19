int findDuplicate(vector<int>& nums) {
        
        int s =0,f=0;
        while(true){
            s = nums[s];
            f = nums[nums[f]];
            if (s==f){
                break;
            }
        }
        int s1 = 0;
        while(true){
            s1 = nums[s1];
            s = nums[s];
            if (s==s1){
                return s;
            }
        }
        
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second > 1){
        //         return it.first;
        //     }
        // }
        // return -1;
        
//         sort(nums.begin(), nums.end());
        
//         for(int i=1;i<nums.size();i++){
//             if(nums[i] == nums[i-1]){
//                 return nums[i];
//             }
//         }
//         return -1;
        
        
        
    }