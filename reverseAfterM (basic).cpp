#include<bits/stdc++.h>
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int n =arr.size();
    int l=m+1, r=n-1;
    while(l<=r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}