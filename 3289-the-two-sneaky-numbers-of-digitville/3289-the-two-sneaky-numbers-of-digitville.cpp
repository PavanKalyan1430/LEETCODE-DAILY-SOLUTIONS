class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
        vector<int> result;

        int n = nums.size();
        int correct_index;
        int i = 0;

        while (i < n){

            correct_index = nums[i];

            if (nums[i] != nums[correct_index]){
                swap(nums[i], nums[correct_index]);
            }

            else i++;

        }

       
        for (int i=0; i<n; i++){
            if (nums[i] != i){
                result.push_back(nums[i]);}
        }

        return result;

    }
};