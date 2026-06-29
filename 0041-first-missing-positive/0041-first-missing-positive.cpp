class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int i = 0;
        int n = nums.size();

        while (i < nums.size()){
            if ( nums[i] > 0 && nums[i] < n ){
                int correct_index = nums[i]-1;
                if (nums[i] != nums[correct_index]) swap(nums[i], nums[correct_index]);
                else i+=1;
            }

            else i+=1;
        }

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != i+1) return i+1; 
        }

        return n+1;


        //return nums;

    }
};