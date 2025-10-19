class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        a = sorted(arr)
        min_diff = a[1] - a[0]
        ans = [[a[0],a[1]]]
        for i in range(1,len(a) - 1):
            diff = a[i + 1] - a[i]
            if diff < min_diff:
                ans = [[a[i],a[i + 1]]]
                min_diff = diff
            elif diff == min_diff:
                ans.append([a[i],a[i + 1]])
        return ans