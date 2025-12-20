class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector <int> need(26, 0);
        vector<int> have(26, 0);

        for (char i : s1){
            need[i-'a']+=1;
        }

        int left = 0;

        for (int right = 0; right<s2.size(); right++){

            have[s2[right] - 'a']+=1;

            if (right- left +1 == s1.size()){

                if (have == need) return true;

                else {
                    have[s2[left] - 'a']-=1;
                    left+=1;
                }

            }


        }

        return false;


    }
};