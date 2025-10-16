class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int l =  0;
        int r = nums.size() - 1;
        while(l<=r){
            int left = abs(nums[l]);
            int right = abs(nums[r]);
            if(left > right){
                ans.insert(ans.begin(),left*left);
                l++;
            }
            else{
                ans.insert(ans.begin(),right*right);
                r--;
            }
        }
        return ans;
    }
};