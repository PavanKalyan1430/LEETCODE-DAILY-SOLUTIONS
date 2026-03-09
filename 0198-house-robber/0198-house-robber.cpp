int fun(vector<int>& nums, int i, vector<int>&dp){

    if (i >= nums.size()){
        return 0;
    }

    if (dp[i] != -1) return dp[i];

    int pick1 = nums[i] + fun(nums, i+2, dp);
    int notpick = fun(nums , i+1, dp);


    return dp[i] = max(pick1 , notpick);
    


}


class Solution {
public:
    int rob(vector<int>& nums) {
        
        vector<int> dp(nums.size(), -1);
        return fun(nums, 0, dp);
    }
};