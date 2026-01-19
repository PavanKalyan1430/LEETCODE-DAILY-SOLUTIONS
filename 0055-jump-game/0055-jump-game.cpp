bool can_reach(vector<int>&nums, vector<int>&dp, int idx, int max_reach){

    if (idx >= nums.size()-1) return true;

    if (nums[idx] == 0){
        return false;}

    if (dp[idx] != true) return false;

    max_reach = nums[idx] + idx;

    for (int jump = idx+1; jump<=max_reach; jump++){
        if (can_reach (nums, dp,jump, max_reach) == true) return true;
    } 
    
    return dp[idx] = false;
    
   

}


class Solution {
public:
    bool canJump(vector<int>& nums) {
        

        vector<int> dp (nums.size(), 1);

        return can_reach(nums, dp, 0, 0);

    }
};