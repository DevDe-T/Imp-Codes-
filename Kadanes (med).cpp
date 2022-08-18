long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        //TLE o(n^2)
        // long long ans = INT_MIN;
        
        // for(int i=0;i<n;i++){
        //     long long s = 0;
        //     for(int j=i;j<n;j++){
        //         s+=arr[j];
        //     ans =max(ans, s);
        //     }
        // }
        // return ans;
        
        long long csum = arr[0];
        long long osum = arr[0];
        for(int i=1;i<n;i++){
            if(csum >= 0){
                csum+=arr[i];
            }
            else{
                 csum = arr[i];
            }
            if(csum > osum){
                osum = csum;
            }
        }
        return osum;
        
    }