void fun(vector<int>&nums, vector<int>&temp, vector<vector<int>>&result, int target, int idx){


    
    if (target == 0){
        result.push_back(temp);
        return;
    }

    for (int i=idx ; i<nums.size(); i++) {

        if (nums[i] > target) break;
        if ( i != idx && nums[i] == nums[i-1]) continue;

        temp.push_back(nums[i]);
        fun(nums, temp, result, target-nums[i], i+1);
        temp.pop_back();
    }

    return;



}



class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());


        vector<int>temp;
        vector<vector<int>> result;

        fun(nums, temp, result, target , 0);

        return result;
    }
};