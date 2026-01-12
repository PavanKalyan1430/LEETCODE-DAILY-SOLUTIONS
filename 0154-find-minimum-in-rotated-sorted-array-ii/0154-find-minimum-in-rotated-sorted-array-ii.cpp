class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size()-1;

        int mid;

        while ( left< right){

            mid = left + (right-left) / 2;

            if (nums[left] == nums[mid] and nums[mid] == nums[right]){
                left++;
                right--;
            }

            if ( nums[mid] < nums[right]){
                right = mid-1;
            }

            else left = mid+1;
        }

        return nums[left];
    }
};