class Solution {
public:
    int findMin(vector<int>& nums) {


        int left = 0, mid;
        int right = nums.size()-1;

        while (left < right) {

            mid = ( left + right ) / 2;

            if (nums[mid] > nums[right]){
                left = mid+1;
            }
            else right = mid;
            
            

        }

        return nums[left];
    }
};