class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()) return "";
        unordered_map<char,int> cntT,window;
        for(char c:t){
            cntT[c]++;
        }
        int have = 0, need = cntT.size();
        pair<int,int> res = {-1,-1};
        int ans = INT_MAX;
        int l = 0;
        for(int r=0;r<s.length();r++){
            char c = s[r];
            window[c]++;
            if(cntT.count(c) && window[c] == cntT[c]){
                have++;
            }
            while(have == need){
                if((r - l + 1) < ans){
                    ans = r - l + 1;
                    res = {l,r};
                }
                window[s[l]]--;
                if(cntT.count(s[l]) && window[s[l]] < cntT[s[l]]){
                    have--;
                }
                l++;
            }
        }
        return ans == INT_MAX ? "" : s.substr(res.first,ans);
    }
};