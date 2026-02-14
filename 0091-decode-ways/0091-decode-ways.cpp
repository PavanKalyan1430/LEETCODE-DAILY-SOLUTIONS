

class Solution {
public:
    int result = 0;
    vector<int> dp;


    int fun(string&s , int idx){

        if (idx == s.size()){
            return 1;
        }

        if (dp[idx] != -1){
            return dp[idx];
        }

        int ways = 0;

        for (int i = idx ; i<s.size() && i<idx+2 ; i++){
            string t = s.substr(idx , i-idx+1);

            if (i== idx && t[0] == '0') break;
            if ( stoi(t) > 26 ) break;
            
            int sz = t.size();
            ways += fun(s, i+1);
            t.resize(sz);



        }

        return dp[idx] = ways;

    }

    int numDecodings(string s) {
        
        

        int idx = 0;

        dp = vector<int>(s.size(),-1 );

        return fun(s, idx);

        //return result;
    }
};