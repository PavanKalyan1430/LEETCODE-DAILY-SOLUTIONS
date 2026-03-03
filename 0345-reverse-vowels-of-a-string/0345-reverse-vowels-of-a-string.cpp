class Solution {
public:
    string reverseVowels(string s) {
        
        unordered_set<char> sety = {'a', 'e', 'i', 'o', 'u'};

        int left = 0 , right = s.size()-1;

        while (left < right){
            
            char l = tolower(s[left]);
            char r = tolower(s[right]);

            if (  sety.count(l) && sety.count(r)  ){
                swap(s[left], s[right]);
                left+=1 ; right-=1;
            }

            else if (!sety.count(l)) left+=1;

            else right -=1;

        }

        return s;

    }
};