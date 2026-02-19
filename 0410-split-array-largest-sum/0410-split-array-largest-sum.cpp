



class Solution {
public:

    

    int fun (vector<int>& nums ,  int k , int idx, vector<vector<int>> &dp){

    if (idx == nums.size()) return 0;    
    
    if (k == 1){
        int s = 0;
        for (int  p = idx ; p<nums.size(); p++){
            s += nums[p];
        }
        return s;
    }


    if (dp[idx][k] != -1) return dp[idx][k];
        

    int ans = INT_MAX;
    int curr= 0;

    for (int i = idx ; i<nums.size(); i++){
        curr += nums[i];
        ans = min(ans,  max(curr , fun(nums, k-1, i+1, dp)));
    }

    return  dp[idx][k] = ans;

}


    int splitArray(vector<int>& nums, int k) {
        
        
        int curr = 0;
        vector<vector<int>> dp(nums.size(), vector<int>(k+1, -1));
        int  rem = accumulate(nums.begin(), nums.end(), 0);
        int idx = 0;


        return fun(nums, k, idx, dp);

    }
};