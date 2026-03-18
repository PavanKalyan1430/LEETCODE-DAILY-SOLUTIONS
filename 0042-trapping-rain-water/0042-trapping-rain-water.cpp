class Solution {
public:
    int trap(vector<int>& nums) {

        int left_max = 0;
        int right_max = 0;

        int water = 0;

        int left = 0;
        int right = nums.size()-1;

        while (left <= right){

            if (nums[left] <= nums[right]){
                if (left_max <= nums[left]) left_max = nums[left];
                else water += (left_max - nums[left]);

                left+=1;
            }

            else {
                if (right_max <= nums[right]){
                    right_max = nums[right];
                }
                else water += (right_max - nums[right]);

                right-=1;
            }

        }

        return water;
        


    }
};