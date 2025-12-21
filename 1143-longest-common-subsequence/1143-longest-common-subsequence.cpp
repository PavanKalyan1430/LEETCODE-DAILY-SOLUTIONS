int fun(string &m, string &n ,int i, int j, vector<vector<int>>&dp){

    if (i < 0 || j< 0){
        return 0;
    }

    if (dp[i][j] != -1) return dp[i][j];

    if (m[i] == n[j]){
        return dp[i][j]  = 1 + fun(m,n, i-1, j-1, dp);
    }

    else {

        int pick1st = fun(m,n,i,j-1, dp);
        int pick2nd = fun(m,n,i-1,j, dp);

        return dp[i][j]  =  max(pick1st, pick2nd);
    }

}

class Solution {
public:
    int longestCommonSubsequence(string m, string n) {
        

        int i = m.size();
        int j  = n.size();

        vector<vector<int>> dp(i, vector<int>(j+1, -1));

        return fun(m,n, i-1, j-1, dp);

    }
};