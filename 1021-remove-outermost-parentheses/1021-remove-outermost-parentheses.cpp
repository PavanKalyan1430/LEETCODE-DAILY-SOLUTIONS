class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string result = "";
        int c = 0;


        for (int i=0; i<s.size(); i++){
            if ( s[i] == '(') c+=1;
            else c-=1;

            if (s[i] == '(' and c == 1) continue;
            else if (s[i] == ')' and c == 0) continue;

            else result += s[i];
        }

        return result;
    }
};