int fun(vector<int>&nums, int target, vector<int>&dp){

    
    if (target == 0) return 1;
    else if (target < 0) return 0;

    int ways = 0;

    if (dp[target] != -1) return dp[target];

    for (int i=0; i<nums.size(); i++){

        ways += fun(nums, target- nums[i], dp);
    }

    return dp[target] = ways;
     //return ways;
        


}


class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        int n = nums.size();
        int sum = 0;

        vector<int> dp(target+1, -1);

        //sort(nums.begin(), nums.end());

        return fun(nums, target, dp);

    }
};