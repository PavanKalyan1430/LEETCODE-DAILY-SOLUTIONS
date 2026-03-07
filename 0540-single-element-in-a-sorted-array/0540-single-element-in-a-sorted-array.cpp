class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        


         int left = 0, right = nums.size() - 1;
        while(left < right){
            int mid = (left + right)/2;
            if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
                left = mid + 1;
            else
                right = mid;
        }
        
        return nums[left];





        // int left = 0;
        // int right = nums.size()-1;

        // int mid ;

        // if (nums.size()== 1) return nums[0];

        
        // while (left <right){
        //     mid = left + (right - left)/2;

        //     if (nums[mid] == nums[mid-1] && (mid-1) % 2 == 0) left = mid+1;

        //     else if (nums[mid] == nums[mid+1] && mid % 2 == 0) left = mid+1;

        //     else right = mid;

        // }

        // return nums[left];
    }
};