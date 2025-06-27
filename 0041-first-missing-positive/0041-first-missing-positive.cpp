class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int i =0;
        int n = nums.size();
        int correct_index;

        while (i < n ){
            if (nums[i] >0 and nums[i] < n ){
                correct_index = nums[i]-1;
                if (nums[i] != nums[correct_index]){
                    swap(nums[i], nums[correct_index]);
                }
                else i+=1;
            }
            else i+=1;

        }
        for (int i: nums) cout<<i<<" ";

        for (int i=0; i<n; i++){
            if (nums[i] != i+1){

                return i+1;
            }
        }
        return n+1;
    }
};