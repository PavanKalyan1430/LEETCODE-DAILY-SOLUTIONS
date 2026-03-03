class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        

        int len = 0;
        int max_len = 0;

        int cost = 0;
        int left = 0;

        for (int right = 0 ; right < s.size(); right++){

            int a = s[right]; 
            int b = t[right];
            cost += abs( a - b );

            while (cost > maxCost){

                int c = s[left];
                int d = t[left];
                cost -= abs( c- d);
                left+=1;
            }

            max_len = max(max_len, right-left+1);

        }

        return max_len;
    }
};