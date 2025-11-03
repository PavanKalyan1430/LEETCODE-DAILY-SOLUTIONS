class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<string> result;
        

        for (int i=0; i<words.size(); i++){

            int flag = true;

            unordered_map <char, char> m, n;
            string w = words[i];

            for (int j=0; j<w.size(); j++){

                if (m.count(w[j]) or n.count(pattern[j])){
                    if (m[w[j]] != pattern[j]  or n[pattern[j]] != w[j]){
                        flag = false;
                        break;
                    }
                }
                
                    m[w[j]] = pattern[j];
                    n[pattern[j]] = w[j];
                

            }

            if (flag) result.push_back(w);
            

        }   


        return result;
    }
};