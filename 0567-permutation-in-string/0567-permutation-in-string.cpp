class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map <char,int> need, have;

        for (int i=0; i<s1.size(); i++) need[s1[i]]+=1;

        int need_cnt = need.size();
        int have_cnt = 0;
        int left = 0;


        for (int right = 0; right<s2.size(); right++){

            char c  = s2[right];

            if (need.count(c)) have[c]+=1;

            if (need.count(c) && need[c] == have[c]) have_cnt +=1;

           
            if (have_cnt == need_cnt) return true;

            if ( right-left+1 == s1.size()){

                char k = s2[left];

                if (need.count(k)){
                    if (need[k] == have[k]) have_cnt-=1;
                    
                    have[k]-=1;

                    if (have[k] == 0) have.erase(k);

                }
                left+=1;
            }
        }

        return false;


    }
};