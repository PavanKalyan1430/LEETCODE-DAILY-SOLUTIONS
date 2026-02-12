void fun(vector<int>&nums, vector<vector<int>>&result, int idx){

    if (idx == nums.size()) result.push_back(nums);


    for (int i = idx; i<nums.size(); i++){
        swap(nums[i], nums[idx]);
        fun(nums, result, idx+1);
        swap(nums[i], nums[idx]);
    }
    

}


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> result;

        fun(nums, result, 0);

        return result;
    }
};