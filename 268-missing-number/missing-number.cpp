class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        for(auto i : nums){
            s += i;
        }
        return (((int)n*(n+1)/2) - s);
    }
};