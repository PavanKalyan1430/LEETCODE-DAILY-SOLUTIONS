class Solution {
public:

    // dp[i][z][o] = maximum strings we can pick
    // starting from index i with z zeroes and o ones left
    int dp[605][105][105];

    int solve(int i, vector<string> &strs, int zLeft, int oLeft) {

        // base cases
        if (i == strs.size()) return 0;
        if (dp[i][zLeft][oLeft] != -1) return dp[i][zLeft][oLeft];

        // count zeros and ones in current string
        int z = 0, o = 0;
        for (char c : strs[i]) {
            if (c == '0') z++;
            else o++;
        }

        // option 1 → skip the string
        int skip = solve(i + 1, strs, zLeft, oLeft);

        // option 2 → take the string (only if possible)
        int take = 0;
        if (zLeft >= z && oLeft >= o) {
            take = 1 + solve(i + 1, strs, zLeft - z, oLeft - o);
        }

        return dp[i][zLeft][oLeft] = max(skip, take);
    }

    int findMaxForm(vector<string>& strs, int m, int n) {

        // initialize dp with -1
        memset(dp, -1, sizeof(dp));

        return solve(0, strs, m, n);
    }
};
