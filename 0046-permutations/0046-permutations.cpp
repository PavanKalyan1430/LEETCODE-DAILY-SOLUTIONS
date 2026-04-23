
void fun(vector<int>&nums, vector<vector<int>> &result, vector<int>&temp,int ind ){

    if (ind == nums.size()){
        result.push_back(nums);
        return;
    }

    for (int i=ind; i<nums.size(); i++){
        swap(nums[i], nums[ind]);
        fun(nums, result, temp, ind+1);
        swap(nums[i], nums[ind]);
    }

    return;

}


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> temp;

        int ind  =0;

        fun(nums, result, temp, ind);

        return result;
    }
};