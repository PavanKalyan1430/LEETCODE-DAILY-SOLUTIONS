class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int zero = 0;

        for (int non_zero = 0; non_zero<nums.size(); non_zero++){

            if (nums[non_zero] != 0) {
                swap(nums[zero], nums[non_zero]);
                zero++;
            }

        }
    }
};