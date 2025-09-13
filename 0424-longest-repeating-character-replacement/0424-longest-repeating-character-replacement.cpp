class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map <char , int> m;

        int left = 0;
        int max_freq = 0;
        int max_len = 0;

        int window_len ;

        for (int right = 0; right<s.size(); right++){

            m[s[right]]++;
            max_freq = max(max_freq, m[s[right]]);

            window_len = right - left + 1;

            while ( (window_len - max_freq ) > k){
                m[s[left]]--;
                window_len-=1;
                left++;
            }

            max_len = max(max_len , right-left+1);

        }

        return max_len;
    }
};