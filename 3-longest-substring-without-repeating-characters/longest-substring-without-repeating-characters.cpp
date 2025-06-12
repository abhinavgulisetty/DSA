class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int ans = 0;
        int l = 0;
        for(int r = 0; r < s.size();r++){
            while(a.find(s[r]) != a.end()){
                a.erase(s[l]);
                l++;
            }
            a.insert(s[r]);
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};