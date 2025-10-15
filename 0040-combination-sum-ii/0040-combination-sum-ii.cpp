void fun(vector<int>& nums, vector<int>& temp, vector<vector<int>>& result, int start, int n, int target){

        if ( target == 0){
            result.push_back(temp);
            return;
        }

        for (int i= start; i<n; i++){

            if ( nums[i] > target)  break;

            if ( i > start and nums[i] == nums[i-1]) continue;

            temp.push_back(nums[i]);

            fun(nums, temp, result, i+1 , n, target - nums[i]);

            temp.pop_back();
        }

        return;

}

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        vector<int> temp;
        int start  = 0;
        int n = nums.size();

        fun(nums, temp, result, start, n, target);

        return result;







    }
};