int fun(vector<int>&nums, int amount , int i, vector<vector<int>>&dp){

    if (i < 0){
        if (amount == 0) return 0;
        else return INT_MAX-1;
    }

    if (dp[i][amount] != -1) return dp[i][amount];

    if (nums[i] <= amount){
        int pick = 1 + fun(nums ,amount-nums[i] , i, dp);
        int notpick = fun(nums, amount, i-1, dp);

        return dp[i][amount] =  min(pick , notpick);
    }

    else return dp[i][amount] = fun(nums, amount , i-1, dp);

}



class Solution {
public:
    int coinChange(vector<int>& nums, int amount) {
        
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        int ans = fun(nums,amount , n-1, dp);

        if (ans == INT_MAX-1) return -1;
        else return ans;
    }
};