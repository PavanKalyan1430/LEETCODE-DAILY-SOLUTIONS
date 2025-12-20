class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> need(26, 0);
        vector<int> have(26, 0);
        vector<int> result ;

        for (char i : p) need[i-'a']+=1;

        int left = 0;

        for (int right = 0; right<s.size(); right++){

            have[s[right] - 'a']+=1;

            if (right- left + 1 == p.size()){
                if (need == have){
                    result.push_back(left);
                }

                have[s[left] - 'a']-=1;
                left +=1;
            }
        }

        return result;

    }
};