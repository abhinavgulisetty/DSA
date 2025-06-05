class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n(nums.begin(),nums.end());
        int ans = 0;
        for(int i: n){
            if(n.find(i - 1) == n.end()){ //n.find() returns iterator if element not found points to n.end()
                int l = 0;
                while(n.find(i+l) != n.end()){
                    l++;
                }
                ans = max(ans,l);
            }
        }
        return ans;
    }
};