class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;

        int correct_index;
        int n = nums.size();

        while(i<n){
            if ( nums[i] > 0 and  nums[i]< n and nums[i] != nums[correct_index] ){
                correct_index = nums[i]-1;
                swap(nums[i], nums[correct_index]);
            }

            else i++;
        }

        for (int i =0; i<nums.size(); i++){
            if (nums[i] != i+1){
                return i+1;
            }
        }

        return n+1;

    }
};