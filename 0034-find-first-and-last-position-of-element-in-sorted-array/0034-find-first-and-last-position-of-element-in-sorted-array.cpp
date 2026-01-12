int Find1st_occur(vector<int>&nums, int target){

    int left = 0;
    int right = nums.size()-1;
    int result = -1;

    while (left <= right){
        int mid = left + (right - left ) / 2;

        if (nums[mid] == target){
            result = mid;
            right = mid-1;
        }

        else if (nums[mid] > target) right = mid-1;

        else left = mid+1;

    }

    return result;

    

}

int Findlast_occur(vector<int>&nums, int target){

    int left = 0;
    int right = nums.size()-1;
    int result = -1;

    while (left <= right){
        int mid = left + (right - left ) / 2;

        if (nums[mid] == target){
            result = mid;
            left = mid+1;
        }

        else if (nums[mid] > target) right = mid-1;

        else left = mid+1;

    }

    return result;

    

}


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
       

        int f_occur = Find1st_occur(nums, target);
        int l_occur = Findlast_occur(nums, target);


        return {f_occur, l_occur};

    }
};