class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int m = coins.size();
        int n = amount;

        // Step 1: Initialize DP table
        vector<vector<int>> DP(m + 1, vector<int>(n + 1, 10001));

        // Step 2: Fill the first row (0 coins) with INT_MAX - 1 for all positive amounts
        // for (int j = 1; j <= n; j++) {
        //     DP[0][j] = INT_MAX - 1;
        // }

        DP[0][0]=0;
        // Step 3: Fill the rest of the table
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (coins[i - 1] > j) {
                    // Coin can't be included
                    DP[i][j] = DP[i - 1][j];
                } else {
                    // Either take the coin or don't take it
                    DP[i][j] = min(DP[i - 1][j], 1 + DP[i][j - coins[i - 1]]);
                }
            }
        }

        return DP[m][n] == 10001 ? -1 : DP[m][n];
    }
};
