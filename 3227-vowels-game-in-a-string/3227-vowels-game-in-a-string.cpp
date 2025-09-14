class Solution {
public:
    bool doesAliceWin(string s) {

       int vowel_count = 0;
      unordered_set <char> sety = {'a', 'e', 'i', 'o', 'u'};

       for (int i=0; i<s.size(); i++){
        if (sety.count(tolower(s[i]))) return true;
       } 

        return false;




    }
};