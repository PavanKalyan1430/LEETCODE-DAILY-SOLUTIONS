void fun(vector<int>&nums, vector<vector<int>> &result, int idx){

     if (idx == nums.size()){
        result.push_back(nums);
         return;
    }

    for (int i=idx ; i<nums.size(); i++){

        swap(nums[i] , nums[idx]);
        fun(nums, result , idx+1);
        swap(nums[i], nums[idx]);

    }

    return;

}



class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> result;
        int idx = 0;
        
        fun(nums, result , idx);


        return result;
    }
};