class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int right = height.size() - 1;
        int left = 0;
        while(left < right){
            int temp = min(height[left], height[right]) * (right-left);
            ans = max(ans,temp);
            if(height[left] < height[right]) left++;
            else right--;
        }
        return ans;
    }
};