class Solution {
public:
    string minWindow(string s, string t) {
        
        int required = t.size();
        int start , min_len = INT_MAX, left = 0;
        vector<int> freq(130, 0);


        for (int i =0; i<t.size(); i++) freq[t[i]]+=1;

        for (int right = 0; right<s.size(); right++){
            
            freq[s[right]]--;

            if (freq[s[right]] >= 0) required--;

            while (required == 0){
                
                if (min_len > right-left+1){
                    start = left;
                    min_len = right-left+1;
                }

                freq[s[left]]+=1;
                if (freq[s[left]] > 0) required+=1 ;
                left+=1;
                
            }
        }

        return (min_len == INT_MAX) ? "" :s.substr(start, min_len);

    }
};