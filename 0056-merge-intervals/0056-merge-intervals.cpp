class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector <vector<int>> res;
        sort(nums.begin(), nums.end());

        for (auto i : nums ){
          if (res.empty()) res.push_back(i);

          else if (res.back()[1] >= i[0]){
                res.back()[1] = max(res.back()[1], i[1]);
          }

          else res.push_back(i);
        }


        return res;
    }
};