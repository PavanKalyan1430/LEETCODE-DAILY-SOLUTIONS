class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        vector <string> v(strs[0].size());
        int cnt = 0;

        for (int i=0; i<strs.size(); i++){

            for (int j = 0; j<strs[i].size(); j++){
                
                v[j].push_back(strs[i][j]);

            }

        }

        for(int i=0; i<v.size(); i++){
            string word = v[i];
            sort(word.begin(), word.end());

            if (word != v[i]) cnt+=1;
        }

        //for (auto i : v) cout<<i<<" ";
        return cnt;
    }
};