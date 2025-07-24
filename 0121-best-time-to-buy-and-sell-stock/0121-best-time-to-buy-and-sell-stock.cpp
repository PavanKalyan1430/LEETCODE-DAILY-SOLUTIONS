class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int mini = nums[0];
        int result = 0;

        for (int i=1; i<nums.size(); i++){

            mini = min(mini, nums[i]);

            result = max( result, nums[i]-mini);
        }

        return result;


    }
};