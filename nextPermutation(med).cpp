void nextPermutation(vector<int>& a) {
        int n = a.size();
        int ind1;
        int ind2;
        int f = 0;
        for(int j=n-2;j>=0;j--){
            if(a[j] < a[j+1]){
                ind1 = j;
                f = 1;
                break;
            }
        }
        if(f == 1){
        for(int j=n-1;j>=0;j--){
            if(a[ind1] < a[j]){
                ind2 = j;
                break;
            }
        }
        swap(a[ind1], a[ind2]);
        reverse(a.begin()+ind1+1,a.end());
        }
        if(f==0){
            reverse(a.begin(), a.end());
        }
    }