class Solution {
public:
    void func(vector<int>& nums, int start, vector<int>& temp, vector<vector<int>>& result){
        if (start == nums.size()){
            result.push_back(temp);  //Store current subset
            return;
        }



        
            //INCLUDE current element
            temp.push_back(nums[start]);
            func(nums, start + 1, temp, result);

            //EXCLUDE (backtrack)
            temp.pop_back();
            func(nums, start+1, temp, result);
}


    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> temp;
        func(nums, 0, temp, result);
        return result;
    }
};
