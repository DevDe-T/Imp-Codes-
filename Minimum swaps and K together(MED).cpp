int minSwap(int arr[], int n, int k) {
        // Complet the function
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                cnt++;
            }
        }
        int bad = 0;
        for(int i=0;i<cnt;i++){
            if(arr[i]>k){
                bad++;
            }
        }
        int ans = bad;
        int i=0,j=cnt;
        while(j<n){
            if(arr[i]>k){
                --bad;
            }
            if(arr[j]>k){
                ++bad;
            }
            i++;
            j++;
            ans = min(ans, bad);
        }
        return ans;
    }


    // Link : https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1