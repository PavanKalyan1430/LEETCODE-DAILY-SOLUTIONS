class Solution {
public:

    unordered_set <string> m;
    vector<int> dp;

    int fun(string &s , int idx){

        if (idx == s.size()) return 0;

        if (dp[idx] != -1) return dp[idx];

        int  skip = 1 + fun(s, idx+1);
        int pick = INT_MAX-1;

        for (int i= idx ; i<s.size(); i++){
            string t = s.substr(idx, i-idx+1);

            if (m.count(t)){
                pick = min(pick ,fun(s, i+1));  
            }
        } 

        return dp[idx] = min(pick , skip);

    }




    int minExtraChar(string s, vector<string>& d) {
        
        int idx = 0;
        for (auto i : d) m.insert(i);

        dp= vector<int>(s.size(), -1);

        return fun(s, idx);
        
    }
};