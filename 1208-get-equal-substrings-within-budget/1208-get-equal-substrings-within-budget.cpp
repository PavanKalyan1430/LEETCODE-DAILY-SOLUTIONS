class Solution {
public:
    int equalSubstring(string s, string t, int k) {
        

        int result  = 0;
        int left = 0, sum = 0;

        for (int right  = 0 ;right <s.size() ; right++){

            sum +=  abs( s[right] - t[right]);

            while (sum > k){
                sum  -=  abs (s[left] - t[left]);
                left+=1;
            } 

            result  = max(result , right-left+1);
        }

        return result;

    }
};