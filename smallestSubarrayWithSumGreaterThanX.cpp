int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
        int i=0,j=0,ans = INT_MAX;
        int sum = 0;
        while(j<n){
            sum+=arr[j];
            while(sum>x){
                ans = min(ans, j-i+1);
                sum -= arr[i];
                i++;
            }
            j++;
        }
        return ans;
    }

link :: https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1