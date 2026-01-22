int fun (string &s1 , string&s2 , int i , int j, vector<vector<int>>&dp){

    if (i <0 || j<0) return 0;

    if (dp[i][j] != -1) return dp[i][j];

    if (s1[i] == s2[j]){
        return dp[i][j] = 1 + fun(s1, s2, i-1, j-1, dp);
    }

    else {
        int pick_1st_string = fun(s1, s2, i, j-1, dp);
        int pick_2nd_string = fun(s1, s2, i-1, j, dp);

        return dp[i][j] = max(pick_1st_string , pick_2nd_string);
    }


}

class Solution {
public:
    int longestCommonSubsequence(string str1, string str2) {
        

        int n = str1.size();
        int m = str2.size();

        vector<vector<int>> dp(n, vector<int>(m+1, -1));

        return fun(str1 , str2 , n-1, m-1, dp);


    }
};