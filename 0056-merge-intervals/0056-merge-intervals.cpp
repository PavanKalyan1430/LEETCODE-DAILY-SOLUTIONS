class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        

        sort(nums.begin(), nums.end()); 

        vector<int> last = nums[0];

        vector<vector<int>> result;
        result.push_back(nums[0]);

        for (int i=1; i<nums.size(); i++){

            if (nums[i][0] <= last[1]){
                last[1] = max(nums[i][1], last[1]);
                result.back() = last;
            }

            else{
                result.push_back(nums[i]);
                last = nums[i];}
        }

        return result;
    }
};