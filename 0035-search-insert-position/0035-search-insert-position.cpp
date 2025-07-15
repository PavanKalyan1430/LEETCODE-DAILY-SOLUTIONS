class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size()-1;
        int mid , ans = 0;

        while (left <= right ){

            mid = (left + right) / 2;

            if (nums[mid] >= target){
                ans = mid;
                right = mid-1;
            }

            else left = mid+1;

        }

        
        if (nums.back() < target) return nums.size();
        
        else return ans;

    }


};