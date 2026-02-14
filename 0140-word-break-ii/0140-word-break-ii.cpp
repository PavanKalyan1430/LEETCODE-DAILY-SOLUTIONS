class Solution {
public:
    vector<string> result;
    unordered_set<string> m;
    vector<int> dp;

    bool fun (string &s , int idx, string& temp){

        if (idx == s.size()){
            temp.pop_back();
            result.push_back(temp);
            return true;
        }

        if (dp[idx] == 0){
           return false;
        }

        for (int i= idx ; i<s.size(); i++){
            string t = s.substr(idx, i-idx+1);

            if (m.count(t)){

                int sz = temp.size();
                temp += t;
                temp.push_back(' ');

                dp[idx] =  fun(s, i+1, temp) ;

                temp.resize(sz);
            }
        }
        return dp[idx];
    }


    vector<string> wordBreak(string s, vector<string>& dict) {
        
        for (auto i : dict) m.insert(i);
        dp = vector<int>(s.size(), -1);

        int idx =0;
        string temp = "";


        fun(s, idx, temp);

        return result;

    }
};