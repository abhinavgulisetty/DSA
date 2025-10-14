class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sm = nums;
        unordered_map<int,int> a;
        sort(sm.begin(),sm.end());
        for(int i = 0;i<nums.size();i++){
            if(a.find(sm[i]) == a.end()){
                a[sm[i]] = i;
            }
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i] = a[nums[i]];
        }
        return ans;
    }
};