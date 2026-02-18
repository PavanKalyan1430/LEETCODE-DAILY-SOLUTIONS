class Solution {
public:

    vector<int> dp;

    vector<vector<int>> palindrome;

    bool palin(string &s){
        int left = 0;
        int right = s.size()-1;

        while (left < right){
            if (s[left] != s[right]) return false;
            left ++;
            right --;
        }
        return true;
    }

    int fun(string &s , int idx, vector<vector<bool>> &palindrome){

        if (idx == s.size()) return-1;

        if (dp[idx] != -1) return dp[idx];

        int ans  = s.size()-idx-1;

        for (int i = idx ; i<s.size(); i++){
            
            if (palindrome[idx][i]){
                ans = min(ans , 1 + fun(s, i+1, palindrome));
            }
            
        }

        return dp[idx] = ans;



    }





    int minCut(string s) {

        int idx = 0;
        int n  = s.size();
        dp = vector<int>(s.size(), -1);

        vector<vector<bool>> palindrome(s.size(), vector<bool>(s.size(), false));


        for (int i = n-1; i >= 0; i--){
            for (int j = i; j < n; j++){

                if (s[i] == s[j] &&
                    (j-i <= 2 || palindrome[i+1][j-1])){

                    palindrome[i][j] = true;
                }
            }
        }

        return fun(s, idx, palindrome);

    }   
};