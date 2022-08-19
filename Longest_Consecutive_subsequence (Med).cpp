int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      int ans = 0, count = 0;
 
    // sort the array
    sort(arr, arr + n);
 
    vector<int> v;
    v.push_back(arr[0]);
 
    //insert repeated elements only once in the vector
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }
    // find the maximum length
    // by traversing the array
    for (int i = 0; i < v.size(); i++)
    {
         
        // Check if the current element is equal
        // to previous element +1
        if (i > 0 && v[i] == v[i - 1] + 1)
            count++;
        // reset the count
        else
            count = 1;
 
        // update the maximum
        ans = max(ans, count);
    }
    return ans;
}


int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> s;
      int ans = 0;
      
      for(int i=0;i<N;i++){
          s.insert(arr[i]);
      }
      
      for(int i=0;i<N;i++){
          if(s.find(arr[i]-1) == s.end()){
              int j = arr[i];
              int c=1;
              while(s.find(j) != s.end()){
                  j= j+1;
                  
              }
              ans = max(ans, j-arr[i]);
          }
      }
      return ans;
    }