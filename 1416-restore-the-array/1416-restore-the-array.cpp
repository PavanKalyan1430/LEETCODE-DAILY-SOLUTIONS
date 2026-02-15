class Solution {

public:
    vector<int> dp;
    const int mod = 1e9 + 7;

    int fun(string&s ,  int k, int idx ){

        if (idx == s.size()) return 1;

        int ways = 0;

        if (dp[idx] != -1) return dp[idx];

        for (int i= idx ; i<s.size(); i++){

            string t = s.substr(idx , i-idx+1);

            if (stoll(t) > k || stoll(t) < 1 ) break;
            
            ways = (ways + fun(s, k, i+1) ) % mod;
            

        }

        return dp[idx] = ways;

    }

    int numberOfArrays(string s, int k) {
        
        
        int idx = 0;
        dp = vector<int>(s.size(), -1);
        int ans = fun(s,k,idx);
        return ans % mod;
    }
};