vector<vector<int>> dp;


int fun(vector<int>&nums , int amount , int i){

    if ( i == nums.size()){
        if (amount == 0) return 1;
        else return 0;
    }

    if (dp[i][amount] != -1) return dp[i][amount];

    if (amount >= nums[i]){

        int pick = fun(nums , amount-nums[i], i);
        int notpick = fun(nums, amount , i+1);

        return dp[i][amount] =   pick + notpick;

    }

    else return dp[i][amount] = fun(nums, amount , i+1);

}


class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
       int n = coins.size();
       dp.assign(n,vector<int>(amount+1, -1)); 
        return fun(coins , amount , 0);
    }
};