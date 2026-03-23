class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int smallest = nums[0];

        if (smallest % 2 == 0) {
            for (int x : nums) {
                if (x % 2 == 1) return false;
            }
        }

        return true;
    }
};