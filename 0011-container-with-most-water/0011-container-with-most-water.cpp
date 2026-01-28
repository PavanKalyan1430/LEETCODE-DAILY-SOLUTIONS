class Solution {
public:
    int maxArea(vector<int>& nums) {
        
        int result = 0;

        int left  = 0;
        int right = nums.size()-1;

        while (left < right){

            int width = right - left;
            int len  = min(nums[left], nums[right]);

            result = max(result , len * width);

            if (nums[left] <= nums[right]) left+=1;
            else right-=1;

        }

        return result;


    }
};