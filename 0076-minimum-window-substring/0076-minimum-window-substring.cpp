class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map <char , int> need;
        unordered_map <char , int> have;
        
        for (auto i : t) need[i]+=1;

        int have_cnt= 0;
        int need_cnt = need.size();

        int left = 0, len, start;
        int minlen = INT_MAX;

        for (int right = 0; right<s.size(); right+=1){
            
            char c   = s[right];

            if (need.count(c)) have[c]+=1;

            if (need.count(c) && need[c] == have[c]) have_cnt +=1;


            cout<<have_cnt<<" ";

            while (have_cnt == need_cnt) {

                len = right - left + 1 ;

                if (len < minlen){
                    start = left;
                    minlen = len;
                }

                char k   = s[left];
                left+=1;
                
                if (need.count(k)){
                    have[k]-=1;

                    if (have[k] < need[k] ) have_cnt -=1;
                }

                if (have[k] == 0) have.erase(k);

                
            }
        }

        return (minlen == INT_MAX) ? "" : s.substr(start, minlen);
    }
};