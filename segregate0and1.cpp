void segregate0and1(int arr[], int n) {
        // code here
        int l=0;
        int r=n-1;
        while(l<r){
            if(arr[l]==1){
                swap(arr[l],arr[r--]);
                
            }
            else{
                l++;
            }
        }
    }