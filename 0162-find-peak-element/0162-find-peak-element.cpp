class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size()-1;
        int mid ;

        while ( left  < right){
            
            mid = (left + right ) / 2;

            if ( nums[mid] < nums[mid+1]){
                left = mid+1;
            }

            else right = mid;
        }

        return left;
    }
};