class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a ;
        for(auto i: nums){
            if(a.count(i)){
                return true;
            }
            else{
                a.insert(i);
            }
        } 
        return false;
    }
};