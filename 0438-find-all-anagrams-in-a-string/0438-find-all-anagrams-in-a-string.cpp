class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int left = 0;
        unordered_map <char, int> need, have;
        vector <int> result;

        for (int i=0; i<p.size(); i++){
            need[p[i]]++;
        }

        int need_count = need.size();
        int have_count = 0;

        for (int right = 0; right<s.size(); right++){

            have[s[right]]++;

            if (need.count(s[right]) and need[s[right]] == have[s[right]]) have_count++;

            while ( right- left + 1>= p.size()) {
   
                if (need_count == have_count and right-left+1 == p.size() ){
                    result.push_back(left);
                }

                if (need.count(s[left]) and need[s[left]] == have[s[left]]  ) have_count--;

                have[s[left]]--;
                if (have[s[left]] == 0) have.erase(s[left]);
                left++;

            }
        }

        return result;


    }
};