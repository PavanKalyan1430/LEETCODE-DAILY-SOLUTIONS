class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int profit = 0;

        for (int i=0; i<nums.size()-1; i++){

            if (nums[i+1] > nums[i]){
                profit += nums[i+1] - nums[i];
            }
        }
        return profit;
    }
};