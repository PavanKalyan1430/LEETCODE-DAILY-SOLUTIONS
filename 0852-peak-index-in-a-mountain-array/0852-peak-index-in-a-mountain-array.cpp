class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        
        int n = nums.size();
        int left = 0;
        int right = n-1;

        if (nums[0] > nums[1]) return 0;
        else if (nums[n-1] > nums[n-2])  return n-1;
        

        while (left < right){
            int mid = (left + right )/ 2;

            if (nums[mid] < nums[mid+1]) left = mid+1;
            else right = mid;

        }

        return left;
    }
};