// Majority Element Using Moore’s Voting Algorithm: O(N) O(1)

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    bool isMaj(int arr[], int n, int cand){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i] == cand){
                cnt++;
            }
        }
        if(cnt > (n/2)) return true;
        return false;
    }
    
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int maj_ind = 0, count = 1;
        for(int i=1;i<size;i++){
            if(a[maj_ind] == a[i]){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                maj_ind = i;
                count = 1;
            }
        }
        if(isMaj(a, size, a[maj_ind])){
            return a[maj_ind];
        }
        else{
            return -1;
        }
    }
};

// Hashtable method : O(N) O(N)

int majorityElement(int a[], int size)
    {
        
        int k=size/2;
        unordered_map<int,int> m;
        for(int i=0;i<size;i++){
            m[a[i]]++;
        }
        for(auto it : m){
            if(it.second > k){
                return it.first;
            }
        }
        return -1;
        
    }