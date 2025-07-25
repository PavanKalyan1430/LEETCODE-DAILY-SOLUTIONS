class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        int m = amount;

        vector<vector<int>> dp( n+1, vector<int> (m+1, 10001));

        dp[0][0] = 0;

        for (int i=0; i<=n; i++) dp[i][0] = 0;

        for (int i=1; i<=n ;i++){
            for (int j=1; j<=m; j++){

                if ( coins[i-1] > j) dp[i][j] = dp[i-1][j];  //  cant pick cuz EX: we can never from an amount of 1 rs from 2 rupee coin

                else {
                    dp[i][j] = min(dp[i-1][j],  1+ dp[i][j- coins[i-1]]);
                }

            }
        }

        // for (auto i : dp){
        //     for (auto k: i) cout<<k<<" ";
        //     cout<<endl;
        // }

        return (dp.back().back() == 10001) ? -1 : dp.back().back();
    }
};