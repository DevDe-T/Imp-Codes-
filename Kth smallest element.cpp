int partition(int arr[], int l, int r){
        int p = arr[r];
        int i=l-1,j=0;
        while(j<r){
            if(arr[j]<=p){
                i++;
                swap(arr[j],arr[i]);
            }
            j++;
        }
        swap(arr[i+1], arr[r]);
        return i+1;
    }
    
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        while(l<=r){
        int p = partition(arr,l,r);
        if(p==k-1){
            return p;
        }
        else if(p>k-1){
            r=p-1;
        }
        else{
            l = p+1;
        }
        }
        return -1;
    }