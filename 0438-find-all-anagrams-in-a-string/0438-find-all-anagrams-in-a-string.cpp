class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> need(26, 0);
        vector<int> have(26, 0);

        int left  = 0;
        vector<int> result;


        for (int i = 0; i < p.size(); i++) need[ p[i] - 'a']+=1;

        for (int right  = 0; right <s.size() ; right++){

            char c  = s[right];

            have[c -'a']+=1;

            if (need == have) result.push_back(left);

            if (right - left + 1 == p.size()){
                char  k = s[left];
                have[k - 'a']-=1;
                left+=1;
            }


        }

        return result;

    }
};