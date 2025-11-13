void fun(vector<int>&nums,vector<int>&temp, vector<vector<int>>&result, int i, int n , int k){

    

    if (temp.size() >= k){
        result.push_back(temp);
        return;
    }

    if (i >=n ) return;

    temp.push_back(nums[i]);

    fun(nums, temp, result, i+1, n, k);

    temp.pop_back();

    fun(nums, temp, result, i+1, n, k);

    return;

}


class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> result ;
        vector<int> nums;
        vector<int> temp;

        for (int i=1; i<=n; i++) nums.push_back(i);


        fun(nums,temp, result, 0,n,k);

        return result;


    }
};