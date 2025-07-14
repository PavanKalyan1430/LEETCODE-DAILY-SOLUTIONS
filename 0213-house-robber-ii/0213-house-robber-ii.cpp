class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() ==1 ) return nums[0];
        if (nums.size()== 2) return max(nums[0], nums[1]);

        vector<int> dp(nums.size(),0);

        vector<int>new_dp(nums.size(), 0);

        dp[0] = 0;      //not robbig the first house;
        dp[1] =  nums[1];

        new_dp[0] = nums[0];
        new_dp[1] = max(nums[0], nums[1]);

        for (int i=2; i<nums.size(); i++){
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }

        for (int i : dp) cout<<i<<" ";

        cout<<endl;

        for (int i: new_dp) cout<<i<<" ";

        for (int i=2; i<nums.size(); i++){

            if (i == nums.size()-1) new_dp[i] = new_dp[i-1];

            else new_dp[i] = max(new_dp[i-1],  nums[i] + new_dp[i-2]);
        }

       

        return max(dp.back(),new_dp.back());


    }
};