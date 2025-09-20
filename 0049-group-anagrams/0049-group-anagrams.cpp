class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;
        unordered_map <string, vector<string>> m;

        string word;


        for (int i=0; i<strs.size(); i++){
            word = strs[i];
            sort(word.begin(), word.end());
            m[word].push_back(strs[i]);

        }

        for (auto i: m){
            result.push_back(i.second);
        }

        return result;

    }
};