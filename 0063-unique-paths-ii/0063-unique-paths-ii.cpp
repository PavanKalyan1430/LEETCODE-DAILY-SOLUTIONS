class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        

        if (nums[0][0] == 1 || nums.back().back() == 1) return 0;

        int rows = nums.size();
        int cols = nums[0].size();

        vector<vector<int>> dp(rows, vector<int>(cols, 0));


        for (int i=0; i<rows; i++){
            if (nums[i][0] != 1) dp[i][0] = 1;
            else break;
        }

        for (int i=0; i<cols; i++){
            if (nums[0][i] != 1) dp[0][i] = 1;
            else break;
        }

        for (int i=1; i<rows; i++){
            for (int j = 1; j<cols; j++){
                
                if (nums[i][j] == 1) continue;

                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }

        return dp[rows-1][cols-1];



    }
};