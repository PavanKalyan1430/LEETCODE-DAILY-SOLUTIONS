void fun(vector<vector<int>> &result, vector <int> temp,vector<int> nums, int i){


    if (i >= nums.size() ){
    result.push_back(temp);
    return ;}

    temp.push_back(nums[i]);

    fun(result, temp, nums, i+1);  //INCLUDE

    temp.pop_back();
    fun(result, temp, nums, i+1);

}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result ;
        vector <int> temp;

        fun (result, temp , nums, 0);
        return result;
    }
};