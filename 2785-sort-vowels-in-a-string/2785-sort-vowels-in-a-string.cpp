class Solution {
public:
    string sortVowels(string s) {
        
        unordered_set <char> sety = {'a', 'e', 'i', 'o', 'u'};

        vector <char> vowels;
        int h = 0;

        for (int i=0; i<s.size(); i++){
            if (sety.count(tolower(s[i]))){
                vowels.push_back(s[i]);
            }
        }

        if (vowels.size() == 0) return s;

        sort(vowels.begin(), vowels.end());


        for (int i=0; i<s.size(); i++){
            if (sety.count(tolower(s[i]))){
                s[i] = vowels[h];
                h++;
            }
        }

        return s;

    }
};