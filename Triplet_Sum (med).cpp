    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                int s = A[i]+A[l]+A[r];
                if(s == X){
                    return true;
                }
                else if(s < X){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return false;
    }


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=0;
        vector<vector<int>> ans;
        for(int x=0;x<nums.size();x++){
            int i=x+1,j=nums.size()-1;
            while(i<j){
                int sum=nums[x]+nums[i]+nums[j];
                if(sum==0){
                    ans.push_back({nums[x],nums[i],nums[j]});
                    int s=i,l=j;
                    while(i<j && nums[i]==nums[s])i++;
                    while(i<j && nums[j]==nums[l])j--;
                }
                else if(sum<0){
                    i++;
                }
                else{
                    j--;
                }
            }
            while (x+1 < nums.size() && nums[x+1]==nums[x]) 
                x++;
        }
        return ans;
    }
};