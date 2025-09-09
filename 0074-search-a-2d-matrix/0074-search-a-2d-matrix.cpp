class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        
        int m = nums.size();
        int n = nums[0].size();

        int left = 0;
        int right =  m*n -1;
        int mid;

        while ( left <= right){

            mid = ( left + right ) / 2;

            int r = mid / n;
            int c = mid % n ;

            int ele = nums[r][c];

            if (ele == target) return true;

            else if (ele < target){
                left = mid+1;
            }

            else right = mid-1;

        }

        return false;

    }
};