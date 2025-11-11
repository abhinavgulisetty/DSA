class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>> dp(n + 1,vector<int>(k + 1,-1));
        return dfs(0,k,piles,dp);
    }
    int dfs(int i,int k,vector<vector<int>>& p,vector<vector<int>>& dp){
        if(i == p.size() || k == 0) return 0;
        if(dp[i][k] != -1) return dp[i][k];
        dp[i][k] = dfs(i+1,k,p,dp);
        int cur = 0;
        for(int j = 0;j<min(k, (int)p[i].size());j++){
            cur += p[i][j];
            dp[i][k] = max(dp[i][k], cur + dfs(i + 1,k - j - 1,p,dp));
        }
        return dp[i][k];
    }
};