int decode(string &s , int i, vector<int>&dp){

    if (i >= s.size()-1 && s[i] != '0') return 1;

    if (dp[i] != -1) return dp[i];
    int ans = 0;


    if (s[i] != '0' ) ans += decode(s,i+1, dp);

    string combine = s.substr(i,2);

    if (combine >="10" && combine <= "26"){
        ans += decode(s,i+2, dp);


    }
    return dp[i] = ans;

}


class Solution {
public:
    int numDecodings(string s) {
        
        vector<int> dp(s.size(), -1);
        return decode(s, 0, dp);
    }
};