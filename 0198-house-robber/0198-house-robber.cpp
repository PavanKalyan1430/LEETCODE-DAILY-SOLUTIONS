class Solution {
public:
    int rob(vector<int>& nums) {
        
        
        if (nums.size() == 1) return nums[0];

        int result = 0;
      

        int sec_last = nums[0];
        int last = max(nums[0], nums[1]);

        result = max(last, sec_last);

        for (int i=2; i<nums.size(); i++){

            result = max(last , sec_last + nums[i]);
            sec_last = last;
            last = result;

            
        }

        return result;
    }
};