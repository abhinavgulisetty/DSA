class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int a = nums.size();
        if(a == 0) return 0;
        unordered_set<int> n;
        for(int i = 0;i < a; i++){
            n.insert(nums[i]);
        }
        int ans = 1;
        int l = 1;
        int x = 0;
        for(auto i: n){
            if(n.find(i - 1) == n.end()){ //n.find() returns iterator if element not found points to n.end()
                l = 1;
                x = i;
                while(n.find(x + 1) != n.end()){
                    l++;
                    x = x + 1;
                }
            }
            ans = max(ans,l);
        }
        return ans;
    }
};