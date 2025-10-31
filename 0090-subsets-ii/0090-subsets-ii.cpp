void fun(vector<int> &nums,vector<int> &temp, vector<vector<int>> &result, int start, int n   ){

        result.push_back(temp);

        for (int i= start ;i <n; i++){

            if ( i != start and nums[i] == nums[i-1]) continue;

            temp.push_back(nums[i]);

            fun(nums, temp , result, i + 1 , n);

            temp.pop_back();

        }
}


class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        

        sort (nums.begin(), nums.end());


        vector<vector<int>> result ;
        vector <int> temp;
        int start = 0;
        int n = nums.size();


        fun(nums, temp , result, start, n);

        return result;


    }
};