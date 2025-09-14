class Solution {
public:
    int maxFreqSum(string s) {
        
        unordered_map <char, int> m;

       int max_vowel_freq = 0 , max_consonant_freq =  0;



        for (int i=0; i<s.size(); i++){
            m[s[i]]++;

            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] =='o' or s[i]=='u'){
                max_vowel_freq = max(max_vowel_freq, m[s[i]]);
            }
            else{
                max_consonant_freq = max(max_consonant_freq, m[s[i]]);
            }
        }

        return max_consonant_freq + max_vowel_freq;
    }
};