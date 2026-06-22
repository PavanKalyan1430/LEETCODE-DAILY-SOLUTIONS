class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        unordered_map <char , int> m, n;

        for (int i=0; i<s.size(); i++){
            m[s[i]] +=1;
        }

        for (int i=0; i<target.size() ; i++){
            n[target[i]]+=1;
        }

        vector<int> temp;

        for (auto i: n){
            temp.push_back( m[i.first] / i.second);
        }

        //for (int i : temp) cout<<i<<" ";

        return *min_element(temp.begin(), temp.end());


    }
};