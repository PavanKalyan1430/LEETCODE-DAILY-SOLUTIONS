long long fun(vector<int>&nums,  vector<int>&colors, int i, vector<long long>& dp){

    if ( i >= nums.size()) return 0;

    if (dp[i] != -1) return dp[i];

    long long pick1 = 0, pick2 = 0 , notpick = 0 ;
    

        if (i +1 < nums.size() && colors[i] != colors[i+1]) {
            pick1 = 0LL + nums[i] + fun(nums, colors, i+1, dp);
        }

        else pick2 = nums[i] + fun(nums , colors, i+2, dp);
   

    notpick = fun(nums, colors, i+1, dp);
    return dp[i] = max(pick1 , max(pick2,  notpick));
    
}



class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {

        vector<long long> dp (nums.size(), -1);
        return fun(nums, colors, 0, dp);

    }
};