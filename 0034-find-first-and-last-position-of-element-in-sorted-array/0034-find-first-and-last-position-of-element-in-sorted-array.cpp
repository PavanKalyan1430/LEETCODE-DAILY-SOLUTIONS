int first_occurence (vector<int>& nums, int &target){

    int left = 0;
    int right = nums.size()-1;
    int mid , ans = -1;

    while(left <= right){
         
         mid = (left + right )/ 2;

         if (nums[mid] >= target){

            if (nums[mid] == target){
                ans  = mid;
            }
            right = mid-1;
         }

         else left = mid+1;
    }
    return ans;

}

int last_occurence (vector<int>& nums, int &target){

    int left = 0;
    int right = nums.size()-1;
    int mid, ans = -1;

    while(left <= right){
         
         mid = (left + right )/ 2;

         if (nums[mid] <= target){

            if (nums[mid] == target){
                ans  = mid;
            }
            left = mid+1;
         }

         else right = mid-1;
    }

    return ans;

}


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int f_occur = first_occurence(nums, target);
        int l_occur = last_occurence(nums, target);

        return {f_occur, l_occur};
    }
};