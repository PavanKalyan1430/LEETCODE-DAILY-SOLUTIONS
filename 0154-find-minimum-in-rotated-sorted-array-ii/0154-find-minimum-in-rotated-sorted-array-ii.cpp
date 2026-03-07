class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size()-1;

        while (left < right){
            int mid = (left + right)/2;

            if (nums[left] == nums[mid] && nums[mid] == nums[right]){
                left+=1;
                right-=1;
            }

            else if (nums[mid] <= nums[right]) right = mid;

            else left = mid+1;

        }


        return nums[left];
    }
};