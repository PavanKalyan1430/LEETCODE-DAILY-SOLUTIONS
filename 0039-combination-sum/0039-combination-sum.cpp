void fun(vector<int> &nums, vector<int> &temp, vector<vector<int>> &result, int i, int target, int n ){



    if (target <= 0 || i == n){

        if (target == 0) result.push_back(temp);

        return;
    }

    if (nums[i] > target) return;
    
    if (nums[i] <= target){
        temp.push_back(nums[i]);
        fun(nums, temp, result, i, target-nums[i], n );
        temp.pop_back();
    }

    fun(nums, temp, result, i+1, target, n);

}


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        

        sort(nums.begin(), nums.end());


        vector<vector<int>> result;
        vector<int> temp;
        int start = 0;
        int n = nums.size();
        fun(nums, temp, result, start, target, n);

        return result;




    }
};