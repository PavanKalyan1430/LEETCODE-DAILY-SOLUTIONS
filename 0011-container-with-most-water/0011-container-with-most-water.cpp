class Solution {
public:
    int maxArea(vector<int>& nums) {
        
        int maxi = 0;

        int left = 0;
        int right = nums.size()-1;


        while (left < right){

            int len = right-left;
            int height = min(nums[left], nums[right]);

            maxi = max (maxi,  len*height);

            if (nums[left] <= nums[right]) left+=1;
            else right-=1;


        }

        return maxi;

    }
};