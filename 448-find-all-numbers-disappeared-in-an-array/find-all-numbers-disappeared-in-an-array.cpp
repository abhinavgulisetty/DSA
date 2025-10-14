class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> a;
        for(auto i: nums){
            a.insert(i);
        }
        vector<int> ans;
        for(int i = 1;i<=nums.size();i++){
            if(!a.contains(i)) ans.push_back(i);
        }
        return ans;
    }
};