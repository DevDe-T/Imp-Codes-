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