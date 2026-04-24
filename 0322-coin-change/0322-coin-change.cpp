vector<vector<int>> dp;

int fun(vector<int>&nums , int target , int i){
   
    if (i == nums.size()){
        if (target == 0) return 0;
        else return INT_MAX-1;

    }

    if (dp[i][target] != -1) return dp[i][target];



    if (nums[i] <= target){
        int pick =   1  + fun(nums, target-nums[i], i);
        int not_pick =  fun(nums, target, i+1);

        return dp[i][target] = min(pick , not_pick);
        
    }

    else return dp[i][target] = fun(nums, target , i+1);



}




class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        int ind = 0;
   
        dp.assign(n, vector<int>(amount+1 , -1));
        int res = fun(coins , amount, ind);



        
        if ( res == INT_MAX-1) return -1;
        else return res;

    }
};