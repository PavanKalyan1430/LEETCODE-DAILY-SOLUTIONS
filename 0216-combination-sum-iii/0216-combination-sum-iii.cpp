void fun(vector<vector<int>> &result, vector<int> &nums, vector<int> &temp, int target, int k, int i){

    if (target < 0 || i >= 9 ) return;

    if (temp.size() >= k ){
        if (target == 0) result.push_back(temp);

        return;
    }

    if (nums[i] > target) return;

    

    temp.push_back(nums[i]);
    fun(result,nums, temp, target-nums[i], k, i+1);

    temp.pop_back();
    fun(result, nums, temp, target, k, i+1);

    return;



}

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> result;
        vector<int> nums;
        vector<int> temp;

        int target = n;

        for (int i=1; i<=9; i++)nums.push_back(i);


        fun(result, nums, temp,target, k, 0);

        return result;
    }
};