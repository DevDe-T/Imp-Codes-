  vector<int> factorial(int N){
        // code here
        vector<int> res;
        res.push_back(1);
        for(int i=2;i<=N;i++){
            int carr = 0;
            for(int j=0;j<res.size();j++){
                int prod = res[j]*i+carr;
                res[i] = prod;
                carr= val/10;
            }
            while(carr!=0){
                res.push_back(carr);
                carr /= 10;
            }
        }
        reverse(res.begin(), res.end());
    }