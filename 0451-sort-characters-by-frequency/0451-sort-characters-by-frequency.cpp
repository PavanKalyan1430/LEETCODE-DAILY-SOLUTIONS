class Solution {
public:
    string frequencySort(string s) {

        vector<vector<char>> bucket(s.size()+1);
        unordered_map <char , int> m;
        string result;

        for (auto i : s) m[i]+=1;

        for (auto i : m){
            bucket[i.second].push_back(i.first);
        }

        for (int i= bucket.size()-1 ; i>=0; i--){
            int j = bucket[i].size()-1;

            while(j >= 0){
                result.append(i , bucket[i][j]);
                j--;
                
            }

        }

        return result;

    }
};