long long trappingWater(int arr[], int n){
        // code here
        long long res = 0;
        
        int lmax = arr[0], rmax = arr[n-1];
        int l=0,r=n-1;
        while(l<r){
            if(lmax < rmax){
                l++;
                lmax = max(lmax, arr[l]);
                res += lmax - arr[l];
            }
            else{
                r--;
                rmax = max(rmax, arr[r]);
                res += rmax - arr[r];
            }
        }
    
        return res;
    }