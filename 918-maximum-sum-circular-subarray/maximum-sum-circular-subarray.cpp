class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int globmin = nums[0], globmax = nums[0];
        int cmin = 0, cmax = 0;
        int sum = 0;
        for(auto i : nums){
            cmax = max(i,cmax+i);
            cmin = min(i,cmin+i);
            globmax = max(globmax,cmax);
            globmin = min(globmin,cmin);
            sum += i;
        }
        if(globmax < 0) return globmax;
        return max(globmax, sum - globmin);
    }
};