class Solution {
public:
    int numberOfSubstrings(string s) {

        unordered_map <char , int> m;
        int count = 0;
        int left = 0;
        
        for (int right =0; right <s.size(); right++){
            m[s[right]]+=1;

            while (m['a'] > 0 && m['b'] > 0 && m['c'] > 0){
                count += (s.size() - right);

                m[s[left]]-=1;
                left+=1;
            }

            
        }

        return count;

    }
};