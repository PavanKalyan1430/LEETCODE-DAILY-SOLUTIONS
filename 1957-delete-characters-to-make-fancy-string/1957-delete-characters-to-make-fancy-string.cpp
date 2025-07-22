class Solution {
public:
    string makeFancyString(string s) {
        
        if (s.size() <= 2) return s;

        string res = "";
        res += s[0];
        res += s[1];
        int h = 2;

        for (int i=2; i<s.size(); i++){

            if ( s[i] == res[h-1] && s[i] == res[h-2]) continue;

            else {
                res += s[i];
                h+=1;}

        }

        return res;
    }
};