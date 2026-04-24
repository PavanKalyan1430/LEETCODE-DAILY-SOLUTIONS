class Solution {
public:
    int minPathSum(vector<vector<int>>& nums) {
        
        int rows = nums.size();
        int cols = nums[0].size();

        vector<vector<int>> dp(rows, vector<int>(cols, 0));

        int sum = 0;

        for (int i=0; i<rows; i++){
            sum += nums[i][0];
            dp[i][0]= sum;  
        }

        sum = 0;
        
        for (int i=0; i<cols ; i++){
            sum += nums[0][i];
            dp[0][i] = sum;
        }



        for (int i=1; i<rows ; i++){
            for (int j =1; j<cols ; j++){
                dp[i][j] = nums[i][j] + min(dp[i-1][j] , dp[i][j-1]);
            }
        }


        // for (auto i : dp){
        //     for (auto j : i) cout<<j<<" ";
        //     cout<<endl;
        // }


        return dp.back().back();



    }
};