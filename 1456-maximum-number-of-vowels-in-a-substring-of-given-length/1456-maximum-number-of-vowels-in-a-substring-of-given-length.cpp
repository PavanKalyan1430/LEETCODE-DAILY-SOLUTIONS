class Solution {
public:
    int maxVowels(string s, int k) {
        
        unordered_set <char> sety = {'a', 'e', 'i', 'o', 'u'};

        int left = 0;
        int result = 0, vowel_count=0;

        for (int right=0; right<s.size(); right++){

            if (sety.count(s[right])){
                vowel_count +=1;
            }

            while ( (right - left + 1) > k){

                if (sety.count(s[left])) vowel_count -=1;
                
                left++;
            }
            result = max(result , vowel_count);
        }

        return result;
    }
};