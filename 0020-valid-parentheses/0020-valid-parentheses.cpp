class Solution {
public:
    bool isValid(string str) {
        
        stack <char> s;

        for (char i : str){


            if (s.empty() or i== '(' or i=='{' or i=='[' ) s.push(i);

            else if ( i == ')' and s.top() == '(') s.pop();

            else if (i == '}' and s.top() == '{') s.pop();

            else if (i == ']' and s.top() == '[') s.pop();

            else s.push(i);


        }
        return s.empty();


    }
};