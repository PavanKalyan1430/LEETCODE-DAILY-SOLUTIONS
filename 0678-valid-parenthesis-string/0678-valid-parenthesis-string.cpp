class Solution {
public:
    bool checkValidString(string s) {
        
        int min_open = 0;

        int max_open = 0;
        

        for (int i=0; i<s.size(); i++){

            if (s[i] == '('){
                min_open +=1;
                max_open+=1;
                continue;
            }

            else if (s[i] == '*'){
                max_open +=1;
            }

            else {
                max_open -=1;
            }

            if (min_open > 0)min_open -=1;

            if (max_open < 0) return false;

        }

        return min_open == 0;
    }
};