//https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(i-j) <= k && nums[j] == key){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};