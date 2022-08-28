int *findTwoElement(int *arr, int n) {
        // code here
        int i,rep,mis;
        for(i=0;i<n;i++){
            if(arr[abs(arr[i])-1] > 0){
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i])-1];
            }
            else{
                rep = abs(arr[i]);
            }
        }
        for(i=0;i<n;i++){
            if(arr[i]>0){
                mis = i+1;
            }
        }
        
        int *a = new int[2];
        a[0] = rep;
        a[1] = mis;
        return a;
    }

int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++; 
        }
        
        int rep, mis;
        
        for(int i=1;i<=n;i++){
            if(mp[i] > 1 ){
                rep = i;
            }
            if(mp[i] == 0){
                mis = i;
            }
        }
        int b=2;
        int *a = new int[2];
        a[0] = rep;
        a[1] = mis;
        return a;
    }