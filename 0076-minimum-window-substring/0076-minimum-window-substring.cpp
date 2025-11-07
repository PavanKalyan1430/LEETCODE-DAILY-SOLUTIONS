class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map <char , int> need, have;

        int need_count = 0, have_count = 0;
        int left = 0;

        int start = 0;
        int  min_len = INT_MAX;

        for (int i=0; i<t.size(); i++) need[t[i]]++;
        need_count = need.size();


        for (int right = 0; right<s.size(); right++){

            have[s[right]]++;
            
            if ( have[s[right]] == need[s[right]]) have_count +=1;

      


            while(have_count >= need_count){

                cout<<left <<"   " << right<<endl;

                if (right-left+1 < min_len){
                    start = left;
                    min_len = right-left+1;
                }

                have[s[left]]-=1;

                if (need[s[left]] > have[s[left]]) have_count-=1;

                left+=1;

            }
            

        }


        return (min_len == INT_MAX) ? "" : s.substr(start, min_len);
    }


};