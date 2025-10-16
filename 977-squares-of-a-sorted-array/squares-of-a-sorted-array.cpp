class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = nums.size() - 1;
        vector<int> ans(i+1);
        int l =  0;
        int r = nums.size() - 1;
        while(l<=r){
            int left = abs(nums[l]);
            int right = abs(nums[r]);
            if(left < right){
                ans[i] = right*right;
                r--;
            }
            else{
                ans[i] = left*left;
                l++;
            }
            i--;
        }
        return ans;
    }
};