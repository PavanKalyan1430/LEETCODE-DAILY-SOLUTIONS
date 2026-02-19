class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map <char , int> m;

        for (int i = 0; i<s.size(); i++){
            m[s[i]] = i;
        }

        vector<int> result;

        int end = 0; 
        int prev = 0;
        for (int i=0; i<s.size(); i++){

            if (m[s[i]] >= i){
                end = max(end, m[s[i]]);
            }

            if (i == end){
                result.push_back( i+1 - prev);
                prev = i+1;
            }
        }

        return result;
    }
};