class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> need(26, 0);
        vector<int> have(26, 0);
        vector<int> result;

        for (char c : p) need[c-'a']+=1;

        int left = 0;

        for (int right = 0 ;right<s.size(); right++){

            int index = s[right]- 'a';
            have[index]+=1;

            if (right-left+1 == p.size()){

                if (have == need) result.push_back(left);

                have[s[left] - 'a']-=1;
                left+=1;
            }
        }
        return result;

    }

};