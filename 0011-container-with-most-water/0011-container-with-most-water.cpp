class Solution {
public:
    int maxArea(vector<int>& nums){
        
        int left = 0;
        int right = nums.size()-1;

        int max_area = 0;


        while (left < right){

            int width = right - left;
            int height = min( nums[right] , nums[left] );

            int area = width * height;
            max_area = max(max_area, area);

            (nums[left] <= nums[right]) ? left+=1 : right-=1;
        }

        return max_area;

    }
};