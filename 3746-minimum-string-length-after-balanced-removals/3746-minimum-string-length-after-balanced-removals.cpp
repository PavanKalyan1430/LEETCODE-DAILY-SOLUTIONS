class Solution {
public:
    int minLengthAfterRemovals(string s) {
        
        stack <char> st;

        for (int i=0; i<s.size(); i++){

            if(st.empty()) st.push(s[i]);

            else if (s[i] == 'a') {
                if (st.top() == 'b') st.pop();
                else st.push(s[i]);
            }

            else {
                if (st.top() == 'a') st.pop();
                else st.push(s[i]);
            }

            

            cout<<st.size()<<" ";

        }

        return st.size();

    }
};