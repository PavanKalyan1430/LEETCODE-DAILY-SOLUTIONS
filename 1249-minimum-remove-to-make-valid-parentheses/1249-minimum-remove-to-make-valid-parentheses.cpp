class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        int open = 0;
        int close = 0;
        string result = "";

        unordered_map <int , int> invalid;

        for (int i=0; i<s.size(); i++){

            if (s[i] == '(') open +=1;
            else if (s[i] == ')') close +=1;

            if (close > open ){
                invalid[i] = 1;
                close = 0;
                open = 0;
            }

        }
        open = 0, close = 0;

        for (int i=s.size()-1; i>=0; i--){

            if (s[i] == '(') open +=1;
            else if (s[i] == ')') close +=1;

            if (close < open ){
                invalid[i] = 1;
                close = 0;
                open = 0;
            }

        }

        for (int i=0; i<s.size(); i++){
            
            if (!invalid[i]) result += s[i];

            
        }
        return result;
    }
};