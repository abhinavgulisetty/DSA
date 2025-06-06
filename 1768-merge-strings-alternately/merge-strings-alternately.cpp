class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n  = word1.length();int m = word2.length();
        string ans = "";
        int l = 0;
        while(l < n || l < m){
            if(l < n) {
                ans += word1[l];
            }
            if(l < m) {
                ans += word2[l];
            }
            l++;
        }
        return ans;
    }
};