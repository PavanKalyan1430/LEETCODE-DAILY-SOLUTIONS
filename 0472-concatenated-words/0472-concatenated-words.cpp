class Solution {
public:
    vector<string> result;
    unordered_set <string> m;
    vector<int> dp;
  
    bool fun (string& s , int idx){

        if (idx == s.size()) return true;

        if (dp[idx] == false) return false;


        for (int i= idx ; i<s.size(); i++){

            string t = s.substr(idx , i-idx+1);

            if (m.count(t)){
                if (fun(s, i+1)) return dp[idx] = true;
            }

        }

        return dp[idx] = false;
    }
          




    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        
        int idx = 0;
        for (auto i : words)m.insert(i);

        for (int i=1; i<words.size(); i++){

            dp = vector<int>(words[i].size(), -1);

            m.erase(words[i]);

            if (fun(words[i], 0)) result.push_back(words[i]);

            m.insert(words[i]);
        }

        return result;
    }
};