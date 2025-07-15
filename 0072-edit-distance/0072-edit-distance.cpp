class Solution {
public:
    int minDistance(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> DP(n + 1, vector<int>(m + 1, 0));
        
        // Base cases
        for (int i = 0; i <= n; i++) DP[i][0] = i; // Deleting all from s1
        for (int j = 0; j <= m; j++) DP[0][j] = j; // Inserting all into s1 to match s2
        
        // Fill the DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                
                if (s1[i - 1] == s2[j - 1]) {
                    DP[i][j] = DP[i - 1][j - 1]; // No operation needed
                } else {
                    DP[i][j] = 1 + min({
                        DP[i - 1][j],     // Deletion
                        DP[i][j - 1],     // Insertion
                        DP[i - 1][j - 1]  // Replacement
                    });
                }
            }
        }

        return DP[n][m];
    }
};
