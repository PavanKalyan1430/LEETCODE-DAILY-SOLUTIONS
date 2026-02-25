class Solution {
public:
    int longestValidParentheses(string s) {
        
        int open = 0;
        int close = 0;
        int result = 0;


        for (int i=0; i<s.size(); i++){
            if (s[i] == '(') open +=1;
            else close +=1;

            if (close > open){
                open = 0;
                close = 0;
            }

            if (open == close) result = max(result , open*2);
        }

        open = 0;
        close = 0;
        
        for (int i= s.size()-1; i>=0; i--){
            if (s[i] == '(') open +=1;
            else close +=1;

            if (open > close){
                open = 0;
                close = 0;
            }

            if (open == close) result = max(result , close*2);
        }

        return result;

        // for (int i=0; i<s.size(); i++)

    }
};