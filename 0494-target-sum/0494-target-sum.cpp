int fun( vector<int>&nums, int temp, int &t, int i, vector<vector<int>>&dp){


    if (i < 0){

        if (temp == t) return 1;

        else return 0;
    }

    if (dp[i][temp] != -1) return dp[i][temp];

    if (nums[i] + temp <= t){
        int pick = fun(nums, temp+nums[i], t, i-1, dp );

        int notpick = fun(nums, temp, t, i-1, dp);

        return dp[i][temp] = pick + notpick;
    }

    else return dp[i][temp] = fun(nums, temp, t, i-1, dp);

}

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n = nums.size()-1;
        int s = 0;
        int total = accumulate(nums.begin(), nums.end(), 0);

        if (abs(target) > total) return 0;
        if ((total + target) % 2 !=0) return 0;

        int t = (total + target)/2;

        vector<vector<int>> dp(n+2, vector<int>(t+1, -1));

        
        return fun(nums, s,  t, n, dp);
    }
};