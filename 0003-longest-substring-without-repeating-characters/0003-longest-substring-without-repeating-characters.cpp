class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set <char> sety;

        int left  = 0;
        int result = 0;

        for (int right =0 ; right<s.size(); right++){

            
            while (sety.count(s[right])){
                sety.erase(s[left]);
                left+=1;
            }
            
            sety.insert(s[right]);

            result = max(result , right-left+1);
        }


        return result;
    }

};