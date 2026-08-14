class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        unordered_map <char , int> m;

        int max_len = 0;

        int left = 0;


        for (int right =0 ; right < s.size(); right++){

            m[s[right]]+=1;

            while (m[s[right]]> 2){
                m[s[left]]-=1;
                left+=1;

            }

            max_len = max(max_len , right-left+1);
        } 

        return max_len;


    }
};