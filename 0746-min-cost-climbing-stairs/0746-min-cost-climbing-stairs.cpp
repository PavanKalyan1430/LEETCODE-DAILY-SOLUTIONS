class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int a = cost[0];
        int b = cost[1];

        int n = cost.size();
        vector<int> dp(n);

        dp[0] = a;
        dp[1] = b;

        int result = 0;

        for (int i=2; i<cost.size(); i++){
            dp[i] = cost[i] + min(dp[i-1] , dp[i-2]);
        }

      //  cout<<dp[n-2];
        return min (dp[n-1], dp[n-2]);
    }
};