class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
        unordered_map <char, int> m;
        int result = 0;
        int n = s.size();



        for (int i=0; i<s.size(); i++){

            if (m.count(s[i])) continue;
            else m[s[i]] = 1;

            char c = s[i];
            int f_ind = i;
            int l_ind = n-1;

            while(l_ind> i  and s[l_ind] != c) l_ind-=1;

            if (f_ind >= l_ind) continue;

            unordered_set <char> sety;

            for (int j = f_ind+1; j<l_ind; j++){
                sety.insert(s[j]);
            }

            result+= (sety.size());



        }

    return result;
        

    }
};