#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bSearch(vector<int> &nums, vector<int> &res, int l, int r, int target){
        if(l>r){
            return;
        }
            int mid = (l+r)/2;
            if(nums[mid] == target){
                res[1] = max(res[1], mid);
                res[0] = min(res[0], mid);
                bSearch(nums, res, l, mid-1, target);
                bSearch(nums, res, mid+1, r, target);
            }
            if(nums[mid] > target){
                bSearch(nums, res, l, mid-1, target);
            }
            else{
                bSearch(nums, res, mid+1, r, target);
            }
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> res;
        int c=0;
        res.push_back(INT_MAX);
        res.push_back(-1);
        
        bSearch(nums, res, 0, n-1, target);
        
        if(res[0] == INT_MAX){
            res[0] = -1;
        }
        return res;
        
    }
};

int main(){
	// Solution s;
	vector<int> nums={21,13,15,7,10,18};

	sort(nums, 6);

	for(int i : nums){
		cout<<i<<endl;
	}

	return 0;
}
