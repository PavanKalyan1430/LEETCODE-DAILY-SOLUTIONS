void fun(vector <int> nums, vector<vector<int>>&result, vector <int> &temp, int start){

    result.push_back(temp);

    for (int i = start; i<nums.size(); i++){

        temp.push_back(nums[i]);    //INCLUDE.

        fun(nums, result, temp, i+1);   // recursion.

        temp.pop_back();   //    EXCLUDE.   

    }


}


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector<int>> result;
        vector <int> temp;
        int start = 0;
          fun(nums, result,temp, start);
         return result;

         



    }
};