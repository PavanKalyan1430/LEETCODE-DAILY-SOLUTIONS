class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack <int> st;
        unordered_map  <int, int> valid;
        string result = "";

        for (int i=0; i<s.size(); i++){
            
            if (s[i] == '(') st.push(i);

            else if (!st.empty() and s[i] == ')' and s[st.top()] == '(' ){
                valid[st.top()] = 1;
                valid[i] = 1;;
                st.pop();
            }
        }


        for (int i=0; i<s.size(); i++){
            if (s[i] == '(' || s[i] == ')'){
                if (valid.count(i)) result += s[i];
            }

            else result += s[i];
        }

        return result;

    }
};