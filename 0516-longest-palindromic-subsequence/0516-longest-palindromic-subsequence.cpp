class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        string text1 = s;  
        reverse(s.begin(), s.end());
        string text2 = s;

        int n = text1.size();   //both has same characters anyhow
        int m = text2.size();   //as one string  is reverse of another

        vector<vector<int>> DP(n+1, vector<int> (m+1,0));

        for (int i=1; i<=n; i++){
            for(int j = 1; j<=m; j++){

                if (text1[i-1] == text2[j-1]){
                    DP[i][j] = DP[i-1][j-1] + 1;
                }

                else DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
            }
        }

        return DP[n][m];

    }
};