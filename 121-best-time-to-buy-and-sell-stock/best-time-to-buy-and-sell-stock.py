class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minprice = prices[0]
        ans = 0
        for i in range(len(prices)):
            if(prices[i] < minprice):
                minprice = prices[i]
            else:
                ans = max(ans,prices[i] - minprice)
        return ans