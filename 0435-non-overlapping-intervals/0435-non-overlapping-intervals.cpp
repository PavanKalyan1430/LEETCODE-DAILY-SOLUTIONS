class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        
        int count = 0;
        vector <vector<int>> result;

        sort(nums.begin(), nums.end(), [](auto &a, auto &b){
            return a[1] < b[1];
        });


        for (auto i : nums){
            for (auto j : i) cout<<j<<" ";
        cout<<"  ,  ";
        }

        result.push_back(nums[0]);

        for (int i=1; i<nums.size(); i++){

            if (nums[i][0] < result.back()[1]){
                count++;
            }

            else result.push_back(nums[i]);
        }

        return count;
    }
};