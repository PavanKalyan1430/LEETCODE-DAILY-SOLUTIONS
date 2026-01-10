class Solution {
public:
    string largestEven(string s) {

        string result = "";
        int n = s.size();

         if ( (s[n-1]- '0') % 2 == 0) return s;

        while ( n-1 >=0 && ( (s[n-1] - '0') % 2 != 0) ) n-=1;

        // for (int i=0; i<=n; i++) result += s[i];
        result = s.substr(0,n);
        
        return result;

        
        
    }
};