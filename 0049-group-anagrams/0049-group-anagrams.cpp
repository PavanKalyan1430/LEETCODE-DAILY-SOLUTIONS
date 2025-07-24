class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map <int, vector<string> >  m;
    int asci;
    vector<vector<string>> result;

        for (int i=0; i<strs.size(); i++){
            asci=0;
            for (int j=0; j<strs[i].size() ;j++){
                asci += strs[i][j]-'a';
            }
        
            m[asci].push_back(strs[i]);
        }
        
        for (auto i: m){
            cout<<i.first<<"  ";
            result.push_back(i.second);
            for (auto k : i.second){
                cout<<k<<" ";
            }
            cout<<endl;
        }

        return result;
    }
};