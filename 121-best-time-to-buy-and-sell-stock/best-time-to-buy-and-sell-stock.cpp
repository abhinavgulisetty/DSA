class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
        int min_price = prices[0];
        int ans = 0;
        for(int i=0;i<prices.size();i++){
            int temp = prices[i] - min_price;
            ans = max(ans,temp);
            min_price = min(min_price,prices[i]);
        }
        return ans;
    }
};