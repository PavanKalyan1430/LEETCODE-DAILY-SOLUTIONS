int first_index(vector<int>& nums, int target){
        int left = 0;
        int right =nums.size()-1;

        int fi=-1;

        while(left <= right ){
            int mid =( left + right ) / 2 ;
            if (nums[mid] == target ){
                fi = mid;
                right = mid-1;
            }

            else if (nums[mid] > target){
                right = mid-1;
            }

            else left = mid +1;

        }
        return fi;
}

int last_index(vector<int>& nums, int target){

    int left = 0;
    int right =nums.size()-1;
    int li=-1;

        while(left <= right ){
            int mid =( left + right ) / 2 ;

            if (nums[mid] == target ){
               li = mid;
               left = mid+1;
            }

            else if (nums[mid] > target){
                right = mid-1;
            }

            else left = mid +1;

        }
        return li;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int fi = first_index(nums,  target);
        int li = last_index( nums,  target);

        return {fi, li};



    }
};