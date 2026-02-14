class Solution {
public:

    bool fun(string &s , unordered_set <string> &m, int idx, vector<int>&dp){

        if (idx == s.size()) return true;

        if (dp[idx] != -1) return dp[idx];

        for (int i= idx ; i<s.size(); i++){
            string t = s.substr(idx, i-idx+1);

            if (m.count(t)){
                if ( fun(s, m , i+1, dp) ) return dp[idx] = true;
            }
        }

        return dp[idx] =  false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set <string> m;
        vector<int> dp(s.size(), -1);
        for (auto i : wordDict) m.insert(i);


        return fun(s, m,0, dp);

    }
};