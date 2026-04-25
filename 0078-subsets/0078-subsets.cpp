void fun(vector<int>&nums, vector<int>&temp, vector<vector<int>>&result, int ind){

    if (ind == nums.size()){
        result.push_back(temp);
        return;
    }

    temp.push_back(nums[ind]);
    fun(nums, temp, result, ind+1);

    temp.pop_back();
    fun(nums, temp, result, ind+1);

    return ;

}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> temp;

        int ind = 0;

        fun(nums, temp, result, ind);
        return result;
    }
};