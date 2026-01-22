// int fun (string &s1 , string &s2 , int i , int j, vector<vector<int>>&dp){

    
//     if (i < 0) return j+1;
//     else if (j < 0) return i+1;

//     if (dp[i][j] != -1) return dp[i][j];

//     if (s1[i] == s2[j]){
//         return dp[i][j] =  1+ fun(s1 , s2, i-1, j-1, dp);
//     }

//     else {
//         return dp[i][j] = 1 + min(fun(s1, s2, i-1, j, dp) , fun(s1, s2, i,j-1, dp));
//     }
// }

class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        
        int n = str1.size();
        int m = str2.size();

        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));



        for (int i=1 ; i<=n ;i++) dp[i][0] = i;

        for (int i=1 ; i<=m ;i++) dp[0][i] = i;

        for (int i=1 ; i<=n ; i++){
            for (int j = 1 ; j<=m; j++){

                if (str1[i-1] == str2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }

                else dp[i][j] =  1+ min(dp[i][j-1] , dp[i-1][j]);
            }
        }

        int i = n;
        int j = m;
        string res = "";

        while ( i> 0 && j>0){

            if (str1[i-1] == str2[j-1]){
                res += str1[i-1];
                i-- ; j--;
            }

            else if (dp[i][j-1] >= dp[i-1][j]){
                res += str1[i-1];
                i--;
            }

            else{
                res += str2[j-1];
                j--;
            }
        }

        while( j> 0){
            res += str2[j-1];
            j--;
        }

        while(i>0){
            res += str1[i-1];
            i--;
        }

        reverse(res.begin(), res.end());

        return res;

        //return "";

        
    }
};