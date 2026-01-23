class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n = nums.size();
        vector<int> diff(n+1, 0);


        for (int i=0; i<queries.size(); i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int d = -1;

            diff[l] += d;
            diff[r+1] += -d;

        }

        for (int i=1; i<nums.size(); i++) diff[i] += diff[i-1];

        for (int i=0; i<nums.size(); i++){
            nums[i] += diff[i];

            if (nums[i] > 0) return false;
        }

        return true;


    }
};