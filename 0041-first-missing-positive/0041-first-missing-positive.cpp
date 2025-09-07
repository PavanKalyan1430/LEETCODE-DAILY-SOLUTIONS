class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int i=0;
        int correct_index;
        int n = nums.size();

        while ( i < n) {


            if (nums[i] > 0 and nums[i] <= n ){
                correct_index = nums[i] -1;
                if (nums[i] != nums[correct_index]){
                    swap(nums[i], nums[correct_index]);
                }

                else i++;
            }

            else i++;

        }

        for (int i=0; i<nums.size(); i++){
            if ( nums[i] != i+1 ) return i+1;
        }

        return n+1;

       
    }
};