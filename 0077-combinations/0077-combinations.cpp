void fun(vector<int>&nums, vector<vector<int>>&result, int n , int k, vector<int>&temp, int i){

    if (i == n){
        if (temp.size()== k) result.push_back(temp);

        return;
    }

    temp.push_back(nums[i]);
    fun(nums,result,n,k,temp,i+1);
    temp.pop_back();
    fun(nums, result, n, k, temp, i+1);

    return;

}




class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> nums;

        for (int i=1; i<=n; i++)nums.push_back(i);

        vector<int> temp;


        vector<vector<int>> result;
        fun(nums,result, n , k, temp, 0);


        return result;
    }
};