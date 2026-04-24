int fun(vector<int>&nums, int prev , int curr, vector<vector<int>> &dp){

    if (curr == nums.size()){
        return 0;
    }

    if (dp[prev+1][curr] != -1) return dp[prev+1][curr];

    if ( prev == -1 || nums[curr] > nums[prev] ){
        int pick  = 1 + fun(nums, curr, curr+1, dp);
        int notpick = fun(nums, prev , curr+1, dp);

        return dp[prev+1][curr] = max(pick , notpick);
    }

    else return dp[prev+1][curr] = fun(nums, prev , curr+1, dp);

}


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int prev = -1;
        int i = 0;

        int n = nums.size();

        vector<vector<int>> dp(n+1, vector<int>(n, -1));

        return fun(nums, prev ,0, dp);
    }
};