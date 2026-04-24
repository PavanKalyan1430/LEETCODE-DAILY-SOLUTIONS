class Solution {
public:
    int numSquares(int n) {
        
        int i = 1;

        vector<int> nums;

        while ( (i*i) <= n){
            nums.push_back(i*i);
            i+=1;
        }

        int k = nums.size();

      //  for (int i : nums) cout<<i<<" ";

        vector<vector<int>> dp(k+1, vector<int>(n+1, INT_MAX-1));

        for (int i=0; i<=k ;i++) dp[i][0] = 0;

        for (int i =1; i<=k;  i++){
            for (int j = 1; j<=n; j++){
                if (j >= nums[i-1]){
                    dp[i][j] = min(dp[i-1][j] , 1+dp[i][j-nums[i-1]]);
                }
                else dp[i][j] = dp[i-1][j];
            }
        }

        return dp.back().back();
    }
};