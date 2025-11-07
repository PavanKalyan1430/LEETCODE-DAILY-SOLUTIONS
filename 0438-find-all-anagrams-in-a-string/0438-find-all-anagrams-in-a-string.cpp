class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map <char, int> need, have;

        int left = 0, need_count = 0 , have_count =0;
        vector<int> result;


        for (int i=0; i<p.size(); i++) need[p[i]]++;
        need_count = need.size();

        for (int right = 0; right<s.size(); right++){

            have[s[right]]++;

            if ( need[s[right]] == have[s[right]]) have_count+=1;

            while(  right-left+1 >= p.size()){

                if (right- left+1  == p.size() and have_count == need_count) result.push_back(left);


                if (need.count(s[left]) and have[s[left]] == need[s[left]]) have_count-=1;
                have[s[left]]-=1;

                left+=1;

            }

        }

        return result;


    }
};