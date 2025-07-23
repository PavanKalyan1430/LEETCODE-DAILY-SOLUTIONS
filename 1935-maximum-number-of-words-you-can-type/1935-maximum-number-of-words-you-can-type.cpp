class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        unordered_map <char, int> m;
        int count_words = 0;
        int flag = 1;

        for (int i=0; i<brokenLetters.size(); i++){
            m[brokenLetters[i]]++;
        }

        for (int i=0; i<text.size(); i++){

            if ( i == text.size()-1 and !m.count(text[i]) ) count_words+=1;

            else if ( text[i]== ' '){
                count_words+=1;
            }

            else {
                if (m.count(text[i])){
                    while ( i <text.size() and text[i] != ' ') i+=1;
                }
            }

        }

        return count_words;

        
    }
};