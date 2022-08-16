#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    unordered_map<int,int> m;
    vector<vector<int>> v;
    for(int i=0;i<arr.size();i++){
        int c = s-arr[i];
        int count = m[c];
        while(count){
            v.push_back({min(c,arr[i]), max(c,arr[i])});
            count--;
        }
        m[arr[i]]+=1;
    }
    sort(v.begin(), v.end());
    return v;
}