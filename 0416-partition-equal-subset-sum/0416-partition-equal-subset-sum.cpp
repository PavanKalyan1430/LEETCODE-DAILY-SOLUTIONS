bool fun(vector<int>&nums,  int sum , int i, vector<vector<int>>&dp){

    if (sum == 0) return true;

    if (i < 0) return false;

    if (dp[i][sum] != -1) return dp[i][sum];

    if (nums[i] <= sum){
        int pick = fun(nums,  sum - nums[i], i-1, dp);
        int notpick = fun(nums ,  sum  , i-1, dp);

        return dp[i][sum] = pick || notpick;
    }

    else return dp[i][sum] =  fun(nums,  sum , i-1, dp);
}

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        

        int total = 0;
        for (int i : nums) total +=i;

        if (total % 2 != 0) return false;

        int sum = total/2;

        vector<vector<int>> dp(nums.size(), vector<int>(sum+1, -1));


        return fun(nums, sum , nums.size()-1, dp);

        
    }
};