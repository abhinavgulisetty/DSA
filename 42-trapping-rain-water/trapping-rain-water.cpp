class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n == 0) return 0;
        int left = 0;int right = n - 1;
        int maxl = height[left];int maxr = height[right];
        int ans = 0;
        while(left < right){
            if(maxl <= maxr){
                left++;
                maxl = max(maxl,height[left]);
                ans += maxl - height[left];
            }
            else{
                right--;
                maxr = max(maxr,height[right]);
                ans += maxr - height[right];
            }
        }
        return ans;
    }
};