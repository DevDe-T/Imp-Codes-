//https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    int ans = 0;
    int min_diff = INT_MAX;
    
    for(int i = 0; i < n - 2; i++)
    {
        int start = i + 1;
        int end = n - 1;
        
        while(start< end)
        {
            int sum = nums[i] + nums[start] + nums[end];
            if(sum==target)return target;
            if(abs(target - sum) < min_diff)
            {
                min_diff = abs(target - sum);
                ans = sum;
            }
            if(sum > target)
                end--;
            else 
                start++;
        }
    }
    
    return ans;
    }
};