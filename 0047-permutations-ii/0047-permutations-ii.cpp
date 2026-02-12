void fun(vector<int>&nums, set<vector<int>>&result, int idx){

    if (idx == nums.size()){
        if (!result.count(nums)) result.insert(nums);
        return;
    }


    for (int i = idx; i<nums.size(); i++){

        if (i != idx && nums[i] == nums[i-1]) continue;

        swap(nums[i], nums[idx]);
        fun(nums, result, idx+1);
        swap(nums[i], nums[idx]);
    }
    

}


class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       // vector<vector<int>> result;
        set<vector<int>> result;
        sort(nums.begin(), nums.end());
        fun(nums, result, 0);

        vector<vector<int>> v(result.begin(), result.end());
        return v;
    }
};