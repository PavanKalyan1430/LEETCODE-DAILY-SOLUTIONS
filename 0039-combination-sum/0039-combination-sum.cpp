void fun(vector<int>&nums, vector<int>&temp, vector<vector<int>>&result, int target, int i){

    

    if (target <= 0 || i >= nums.size()){
        
        if (target == 0) result.push_back(temp);

        return;
    }

    if (nums[i] > target) return;

    temp.push_back(nums[i]);

    fun(nums, temp, result, target-nums[i], i);

    temp.pop_back();

    fun(nums, temp, result, target, i+1);

    return;






}

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<int> temp;
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        int start = 0;

        fun(nums, temp, result, target, start);


        return result;



    }
};