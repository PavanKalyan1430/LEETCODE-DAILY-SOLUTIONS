class Solution {
public:
    int maxProfit(vector<int>& nums) {
        


        int result = 0;
        int mini = INT_MAX;


        for (int i=0; i<nums.size(); i++){

            mini  = min(mini , nums[i]);

            if ( nums[i] > mini){
                result  = max(result , nums[i] - mini);
            }

        }

        return result;
    }
};