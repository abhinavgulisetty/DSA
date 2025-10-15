class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        l,r = 0,1
        while r!= len(prices):
            if prices[r] > prices[l]:
                ans = max(ans,prices[r] - prices[l])
            else:
                l = r
            r = r + 1
        return ans