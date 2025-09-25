class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        sort(nums.rbegin(), nums.rend());
        int diff = 0;

        for (int i=0; i<nums.size()-1; i++){
            
            diff = max(diff, nums[i] - nums[i+1]);
        }

        return diff;
    }
};