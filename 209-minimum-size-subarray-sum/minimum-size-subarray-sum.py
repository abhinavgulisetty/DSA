class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l = 0
        res = float('inf')
        tot = 0
        for i in range(len(nums)):
            tot += nums[i]
            while tot>=target:
                res = min(res,i-l+1)
                tot -= nums[l]
                l+=1
        if res == float('inf'):
            return 0
        return res