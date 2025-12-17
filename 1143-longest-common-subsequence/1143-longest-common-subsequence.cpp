int fun (string &t1 , string&t2 , int i , int j, vector<vector<int>>&dp){

    if (i < 0 || j < 0) return 0;

    if (dp[i][j] != -1) return dp[i][j];

    if (t1[i] == t2[j]){
        return  dp[i][j] = 1 + fun(t1, t2, i-1, j-1, dp);
    }

    else{
        int pickfirst = fun(t1, t2, i, j-1, dp);
        int picksecond = fun(t1, t2, i-1, j, dp);

        return dp[i][j] = max(pickfirst , picksecond);

    }
}


class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        
        int n = t1.size();
        int m = t2.size();

        vector <vector<int>> dp(n , vector<int> (m+1, -1));

        return fun(t1, t2, n-1, m-1, dp);

    }
};