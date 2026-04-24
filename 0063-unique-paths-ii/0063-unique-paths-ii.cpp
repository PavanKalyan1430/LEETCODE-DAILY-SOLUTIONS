class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums){        
        
        int rows = nums.size();
        int cols = nums[0].size();

        if (nums[0][0] == 1 || nums[rows-1][cols-1] == 1) return 0;

        vector<vector<int>> dp(rows, vector<int>(cols, 0));

        for (int i=0; i<rows; i++){
            if (nums[i][0] == 0) dp[i][0] = 1;
            else break;
        }

         for (int i=0; i<cols; i++){
            if (nums[0][i] == 0) dp[0][i] = 1;
            else break;
        }

        for (int i=1; i<rows; i++){
            for (int j = 1; j<cols ; j++){
                if (nums[i][j] == 0){
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
                
            }
        }

        // for (auto i : dp){
        //     for (auto j : i) cout<<j<<" ";
        //     cout<<endl;
        // }

        // cout<<endl;

       // cout<<dp.back().back();

        return dp.back().back();

    }
};