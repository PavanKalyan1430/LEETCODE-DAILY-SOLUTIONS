void fun(vector<int>&nums, vector<int>&temp, vector<vector<int>>&result, int target, int start){

    if (target <= 0){
        
        if (target == 0) result.push_back(temp);

        return;
    }

    for (int i= start; i<nums.size(); i++){

        if ( nums[i] > target) break;

        temp.push_back(nums[i]);

        fun(nums, temp, result, target-nums[i], i);

        temp.pop_back();
    }

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