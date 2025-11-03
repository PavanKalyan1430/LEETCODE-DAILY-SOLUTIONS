class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        

        vector <string> result;


        for (int i=0; i<words.size(); i++){

            bool flag = true;
            unordered_map <char, char> m;
            unordered_map <char, char> n;

            for (int j =0; j<words[i].size(); j++){

               if (m.count(words[i][j])){
                    if (m[words[i][j]] != pattern[j]){
                        flag = false;
                        break;
                    }
               }

               else {
                    m[words[i][j]] = pattern[j];

               }

               if (n.count(pattern[j])){
                  if (n[pattern[j]] != words[i][j] ) {
                    flag = false;
                    break;
                  }
               }

               else {
                    n[pattern[j]] = words[i][j];

               }

            }

            if (flag) result.push_back(words[i]);


        }

        return result;
    }
};