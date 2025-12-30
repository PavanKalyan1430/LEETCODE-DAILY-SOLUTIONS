class Solution {
public:
    bool isValid(string s) {
        
        string a, b , c , t= "";
    

        for (int i=0; i<s.size(); i++){
            int z = t.size();

            if (s[i] == '(') t.push_back('(');

            else if (s[i] == ')'){
                if (z && t.back() == '(') t.pop_back();
                else return false;
            }

            if (s[i] == '{') t.push_back('{');

            else if (s[i] == '}'){
                if (z &&t.back() == '{') t.pop_back(); 
                else return false;
            }

            if (s[i] == '[') t.push_back('[') ;

            else if (s[i] == ']'){
                if (z && t.back() == '[') t.pop_back();
                else return false;
            }

        }

        return t.size() == 0;
        

    }
};