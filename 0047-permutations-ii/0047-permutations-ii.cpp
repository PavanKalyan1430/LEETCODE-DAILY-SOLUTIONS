void fun(vector<int>& nums,  vector<int>& temp,  vector<vector<int>>& result, vector<bool>& check, int n){

    if ( temp.size() == n){
        
        if (find(result.begin(), result.end(), temp) == result.end()){

        result.push_back(temp);
        }
        return;
    }

    for (int i=0; i<n; i++){

        if (check[i] == false){

            temp.push_back(nums[i]);
            check[i] = true;

            fun(nums, temp, result, check, n);

            temp.pop_back();
            check[i] = false;

        }

    }

    return;

}


class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        vector<int> temp;
        vector<vector<int>> result;
        vector<bool> check(nums.size());
        int n = nums.size();


        fun(nums, temp, result, check, n);

        return result;

    }
};