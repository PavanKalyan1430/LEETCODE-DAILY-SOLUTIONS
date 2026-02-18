class Solution {
public:

    vector<string> result;
    unordered_set <string> m;
    vector<int> dp;


    bool fun(string & s , int idx , string& temp){
        if (idx == s.size()){
            temp.pop_back();
            result.push_back(temp);
            return true;
        }


        bool found = false;

        for (int i = idx; i<s.size(); i++){
            string t = s.substr(idx , i-idx+1);

            if (m.count(t)){
                int sz = temp.size();
                temp += t;
                temp.push_back(' ');

                found = fun(s, i+1, temp);

                temp.resize(sz);
            }
        }

        return dp[idx] = found;


    }

    vector<string> wordBreak(string s, vector<string>& d) {

        for (auto i : d) m.insert(i);

        string temp = "";
        dp = vector<int>(s.size(), -1);
        fun(s, 0, temp);
        return result;
    }
};