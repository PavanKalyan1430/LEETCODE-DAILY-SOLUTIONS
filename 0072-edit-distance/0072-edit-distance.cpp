
int fun( string &p, string &q, int i , int j, vector<vector<int>>&dp){

    if (i < 0) return j+1;

    if (j < 0) return i+1;

    if (dp[i][j] != -1) return dp[i][j];

    if (p[i] == q[j] ) return dp[i][j] =  fun(p, q, i-1, j-1, dp);

    int add = 0, del = 0, rep = 0;

    
        add = 1 + fun(p, q, i, j-1, dp);
        del = 1 + fun(p, q, i-1, j, dp);
        rep = 1 + fun(p, q, i-1, j-1, dp);
    
    
    return dp[i][j] = min({add, del, rep});


}

class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int i = word1.size();
        int j = word2.size();

        vector<vector<int>> dp(i, vector<int>(j, -1));

        return fun(word1, word2, i-1, j-1, dp);
    }
};