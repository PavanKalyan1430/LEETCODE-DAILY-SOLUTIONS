class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        long long total = 0;
        for (int num : nums) total += num;

        // If total sum is odd, can't partition equally
        if (total % 2 != 0) return false;

        int target = total / 2;

        // Use long long DP array to count subsets (treat count > 0 as "true")
        vector<vector<long long>> dp(n + 1, vector<long long>(target + 1, 0));

        // Base case: there's always 1 way to form sum 0 (empty subset)
        for (int i = 0; i <= n; i++) dp[i][0] = 1;

        // Fill DP table using 0/1 Knapsack pattern
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                if (nums[i - 1] <= j) {
                    // pick or not pick
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
                } else {
                    // not pick only
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        // If count > 0, subset exists
        return dp[n][target] > 0;
    }
};
