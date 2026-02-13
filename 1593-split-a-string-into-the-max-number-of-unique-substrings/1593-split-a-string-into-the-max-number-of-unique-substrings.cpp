class Solution {
public:

    int ans = 0;

    void fun(string &s, int i, unordered_set<string> &st){

        if (i == s.size()){
            ans = max(ans , (int)st.size());
            return;
        }

        string temp = "";

        for (int j = i; j < s.size(); j++){

            temp += s[j];

            if (!st.count(temp)){

                st.insert(temp);

                fun(s, j+1, st);

                st.erase(temp);     // backtrack
            }
        }
    }

    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        fun(s, 0, st);
        return ans;
    }
};
