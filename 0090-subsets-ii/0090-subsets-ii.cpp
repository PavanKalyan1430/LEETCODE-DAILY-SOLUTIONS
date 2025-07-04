void fun(vector <vector<int>> &result, vector<int> temp, vector<int> nums, int start){

    result.push_back(temp);

    for (int i= start ; i<nums.size(); i++){

        if (i > start and  nums[i]==nums[i-1]) continue;

        temp.push_back(nums[i]);

        fun(result , temp , nums, i+1);

        temp.pop_back();

    }



}


class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector <int> temp;
        int start = 0;

         fun(result , temp , nums, start);

        return result;


    }
};