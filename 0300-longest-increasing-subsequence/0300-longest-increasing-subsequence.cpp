int fun(vector<int>&nums, int prev , int i, int n, vector<vector<int>>& dp){

        if (i == n) return 0;

        if (dp[i][prev+1] != -1) return dp[i][prev+1];

        if (prev == -1 || nums[i] >nums[prev]){

            int pick = 1 + fun(nums, i, i+1, n, dp);
            int notpick = fun(nums, prev, i+1, n, dp);

            return dp[i][prev+1] = max(pick , notpick);
        }

        else return dp[i][prev+1] = fun(nums, prev, i+1, n, dp);
}

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        

        int n = nums.size();
        vector<vector<int>> dp(n , vector<int>(n+1, -1));
        return fun(nums, -1, 0, n, dp);
    }
};