class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        int i= 0;
        int correct_index ;

        while ( i < n) {

            correct_index = nums[i]-1;

            if ( nums[i] != nums[correct_index]){
                swap(nums[i] , nums[correct_index]);
            }

            else i++;

        }

        for (int i=0; i<nums.size(); i++){

            if ( nums[i] != i+1) return nums[i];
        }

        return 0;
    }
};