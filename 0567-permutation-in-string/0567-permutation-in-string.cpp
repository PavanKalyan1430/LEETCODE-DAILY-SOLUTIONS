class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int> need(26, 0);
        vector<int> have(26, 0);

        for (int i=0; i<s1.size(); i++) need[s1[i] - 'a']+=1;

        int left = 0;


        for (int right =0; right<s2.size(); right++){
            
            int index = s2[right] - 'a';
            have[index]+=1;
           
            if (right - left+1 == s1.size()){

                if (need == have) return true;

                have[s2[left] - 'a']-=1;
                left+=1;
            }
        }
        return false;
    }
};