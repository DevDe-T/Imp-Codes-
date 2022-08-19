vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            // m.count(a[i]) only gives 0 and 1
            unordered_map<int,int> m;
            vector<int> ans;
            for(int i=0;i<n1;i++){
                if(m[A[i]] < 1){
                    m[A[i]]++;
                }
            }
            for(int i=0;i<n2;i++){
                if(m[B[i]] == 1){
                    m[B[i]]++;
                }
            }
            for(int i=0;i<n3;i++){
                if(m[C[i]] == 2){
                    m[C[i]]++;
                    
                }
            }
            
            for(auto it : m){
                if(it.second == 3){
                    ans.push_back(it.first);
                }
            }
            sort(ans.begin(), ans.end());
            return ans;
        }