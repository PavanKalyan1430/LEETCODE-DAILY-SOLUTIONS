class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map <char, int> m;

        if (s.size() != t.size()) return false;

        for (char i : s){
            m[i]++;
        }

        for (char i : t){

            m[i]--;

            if (m[i] < 0) return false;

        }

        return true;
    }
};