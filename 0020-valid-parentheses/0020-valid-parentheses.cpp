class Solution {
public:
    bool isValid(string s) {

        string res = "";

        for (int i=0; i<s.size(); i++){

            if (s[i] == '(' || s[i] == '{'|| s[i] == '['){
                res.push_back(s[i]);
            }

            else {
                if (res.empty()) return false;

                if (s[i] == ')' && res.back() != '(')  return false;               
                else if (s[i] == '}' && res.back() != '{') return false;

                else if (s[i] == ']' && res.back() != '[') return false;   

                res.pop_back();            
            }
        }

        return res.size() == 0;
    }
};