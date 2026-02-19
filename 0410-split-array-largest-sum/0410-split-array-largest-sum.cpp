class Solution {
public:

    vector<int> prefix;

    int fun (vector<int>& nums , int k ,int idx, vector<vector<int>> &dp){

        int n = nums.size();

        if (k == 1)
            return prefix[n] - prefix[idx];

        if (dp[idx][k] != -1)
            return dp[idx][k];

        int ans = INT_MAX;
        int curr = 0;

        for (int i = idx ; i<= n-k ; i++){

            curr += nums[i];

            int next = fun(nums, k-1, i+1, dp);

            if (next != INT_MAX)
                ans = min(ans , max(curr , next));
        }

        return dp[idx][k] = ans;
    }

    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();

        vector<vector<int>> dp(n,vector<int>(k+1, -1));

        prefix = vector<int>(n+1 , 0);

        for (int i=1; i<=n; i++)
            prefix[i] = prefix[i-1] + nums[i-1];

        return fun(nums, k, 0, dp);
    }
};
