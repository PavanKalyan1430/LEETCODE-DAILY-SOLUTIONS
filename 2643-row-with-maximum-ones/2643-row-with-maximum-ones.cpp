class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& nums) {
        
        int max_sum = 0;
        int idx = 0;


        for (int i=0; i<nums.size(); i++){
            int sum = accumulate(nums[i].begin(), nums[i].end(), 0);

            if (sum == nums.size()) return {i , sum  };

            if (sum > max_sum){
                max_sum = sum;
                idx = i;
            }
        }


        return {idx, max_sum};
    }
};