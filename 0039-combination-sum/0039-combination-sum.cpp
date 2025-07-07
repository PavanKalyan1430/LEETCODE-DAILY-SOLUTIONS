void fun (vector<vector<int>> &result , vector<int> &temp, vector<int> nums, int target, int i){

    if ( i >=nums.size() or target <= 0) {
        
        if ( target == 0){
            result.push_back(temp);
        }
        return ;
    }

    temp.push_back(nums[i]);

    fun (result, temp, nums, target-nums[i], i);

    temp.pop_back();
    fun(result, temp, nums, target, i+1);


}



class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>> result;
        vector <int> temp;
        int start = 0;
        fun (result , temp , nums , target, start);

        return result;

    }
};