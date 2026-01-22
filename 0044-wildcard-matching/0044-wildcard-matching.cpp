bool fun (string &s, string &p , int i, int j, vector<vector<int>>&dp){

    if ( j < 0) return i < 0;

    if ( i < 0){
        for (int k=0; k<=j ; k++){
            if (p[k] != '*') return false;
        }

        return true;
    }

    if (dp[i][j] != -1) return dp[i][j];

    if (s[i] == p[j] || p[j] == '?'){
        return dp[i][j] = fun(s,p, i-1, j-1, dp);
    }

    else if (p[j] == '*'){
        
        bool pick_no_char = fun(s, p, i, j-1, dp);
        bool pick_chars = fun(s, p, i-1, j, dp);

        return dp[i][j] = pick_no_char || pick_chars;
    }

    return  false;

}


class Solution {
public:
    bool isMatch(string s, string p) {
        
        int m = s.size();
        int n = p.size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        return fun(s, p, m-1, n-1, dp);
    }
};