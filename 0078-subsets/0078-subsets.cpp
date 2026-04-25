void fun(vector<int>&nums, vector<int>&temp, vector<vector<int>>&result, int ind){

    result.push_back(temp);

    for (int i=ind ; i<nums.size(); i++){

        temp.push_back(nums[i]);
        fun(nums, temp, result, i+1);

        temp.pop_back();
    }
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