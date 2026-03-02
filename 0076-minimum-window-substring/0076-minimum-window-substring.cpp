class Solution {
public:
    string minWindow(string s, string t) {

       
        unordered_map <char, int> need , have;

        for (int i=0; i<t.size(); i++) need[t[i]]+=1;

        int need_cnt = need.size(), have_cnt = 0, start;

        int min_len = INT_MAX;
        int left = 0;

        for (int right =0; right<s.size(); right++){
            char c = s[right];

            if (need.count(c)) have[c]+=1;

            if ( need.count(c) && need[c] == have[c]) have_cnt +=1;

    
            while (have_cnt == need_cnt){

                if (min_len > right-left+1){
                    start = left;
                    min_len = right-left+1;
                }
                char k = s[left];

                if (need.count(k) && need[k] >= have[k]) have_cnt-=1;

                have[k]-=1;

                if (have[k] == 0) have.erase(k);
                left+=1;
            }
        }

        if (min_len == INT_MAX) return "";

        return s.substr(start , min_len);



    }
};