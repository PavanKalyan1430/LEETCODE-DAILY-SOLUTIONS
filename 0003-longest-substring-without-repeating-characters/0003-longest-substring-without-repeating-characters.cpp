class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map <char, int> m;
        int left = 0;
        int max_len = 0;

        for (int right =0; right<s.size(); right++){
            m[s[right]] +=1;

            while( m[s[right]] > 1){
                m[s[left]]--;
                left +=1;
            }
            max_len = max(max_len , (right-left)  + 1);
        }

        return max_len;
    }
};