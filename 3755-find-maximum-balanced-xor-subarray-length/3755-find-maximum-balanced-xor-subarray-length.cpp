class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        const int n = nums.size();
        map<pair<int,int>, int> mp;
        int runningXOR = 0, balance = 0;
        int res = 0;
        mp[{0,0}] = -1;
        for (int i = 0; i < n; ++i) {
            runningXOR ^= nums[i];

            // adjust balance. +1 for evens, -1 for odds
            balance += nums[i] % 2 ? -1 : 1;

            // look for -balance in mp to counteract the current balance
            // this will yield a balance of zero (same amount of even/odd)
            pair<int,int> key = { runningXOR, -balance };

            if (mp.count(key)) res = max(res, i - mp[key]);
            else mp[key] = i;
        }
        return res;
    }
};