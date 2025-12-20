void fun(vector<int>&nums, vector<vector<int>>&result, vector<int>&temp, int target, int start, int &n ){

    
        if (target == 0){
            result.push_back(temp);
            return;
        }
    



    for (int i=start; i<n; i++){

        if (i != start and nums[i] == nums[i-1]) continue;

        if (nums[i] > target) break;
        
        
            temp.push_back(nums[i]);
           

            fun(nums, result, temp, target - nums[i] , i+1, n);

            temp.pop_back();
           
        
    }

    return;




}


class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        
        vector<vector<int>> result;
        vector<int> temp;
        int i = 0;

        int  n = nums.size();

        sort(nums.begin(), nums.end());

        fun(nums, result, temp, target, i, n);

        return result;

    }
};