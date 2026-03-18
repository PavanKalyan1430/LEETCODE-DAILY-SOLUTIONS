class Solution {
public:
    string convert(string s, int n) {
        
        vector<string> res(n);

        if (n == 1) return s;

        int ind = 0;
        int dir = -1;

        for (int i=0; i<s.size(); i++){

            if ( ind == 0 || ind == n-1 ) dir*= -1;
            res[ind].push_back(s[i]);
            ind += dir;

        }

        string result = "";

        for (auto i : res) result +=i;
        return result; 


    }
};