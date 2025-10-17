void fun(vector <int> nums, vector<vector<int>> &result, vector <int> temp,int start){

       if (temp.size()==nums.size()){
        result.push_back(temp);
        return ;
      }

      for (int i= start; i<nums.size(); i++){

        if  (find(temp.begin(), temp.end(), nums[i]) != temp.end()) continue;
        
            temp.push_back(nums[i]);

            fun(nums, result, temp, start);

            temp.pop_back();
      }

}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> result;
        vector <int> temp;

         fun(nums, result, temp, 0);

        return result;
    }
};