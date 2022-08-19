int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int pro = 0;
        for(int i=1;i<prices.size();i++){
            if(buy < prices[i]){
                pro = max(pro, prices[i]-buy);
            }
            else if(buy > prices[i]){
                buy = prices[i];
            }
        }
        return pro;
    }