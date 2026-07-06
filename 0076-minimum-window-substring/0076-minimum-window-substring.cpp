class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map <char,int> need, have;

        int need_cnt = 0, have_cnt = 0;

        for (int i=0; i<t.size(); i++) need[t[i]]+=1;

        need_cnt = need.size();

        int left = 0, min_len = INT_MAX, start = 0;

        for (int right =0; right<s.size(); right++){

            if (need.count(s[right])) have[s[right]]+=1;

            if (need.count(s[right]) && have[s[right]] == need[s[right]]) have_cnt +=1;

            while (have_cnt >= need_cnt){

                if (right-left+1 < min_len){

                    min_len = right-left+1;
                    start = left;
                }

                if (need.count(s[left])){

                    if (need[s[left]] >= have[s[left]]) have_cnt-=1;

                    have[s[left]]-=1;
                }

                if (have[s[left]] <= 0) have.erase(s[left]);

                left+=1;

            }


        }

            if (min_len == INT_MAX) return "";

            return s.substr(start, min_len);
    }
};