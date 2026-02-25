class Solution {
public:
    int longestValidParentheses(string s) {
        
        int open = 0;
        int close = 0;
        int ans = 0 ;

        for (int i=0; i<s.size(); i++){
            (s[i] == '(') ? open+=1 : close +=1;

            if (close > open){
                open = 0; close = 0;
            }

            if (open == close) ans = max(open*2, ans);
        }

        open = 0; close = 0;

        for (int i=s.size()-1; i>=0; i--){

            (s[i] == '(') ? open+=1 : close +=1;

            if (close < open){
                open = 0; close = 0;
            }

            if (open == close) ans = max(open*2, ans);
        }

        return ans;



    }
};