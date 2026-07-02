class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int profit = 0;

        for(auto cost: prices){
            minPrice = min(minPrice, cost);
            profit = max(profit, cost - minPrice);
        }
        return profit;
    }
};

/*
int profit = 0;
        for(int i =0;i<prices.size();i++){
            int buy = prices[i];
            for(int j=i+1; j<prices.size();j++){
                int sell = prices[j];
                profit = max(profit, sell - buy);
            }
        }
        return profit;
*/