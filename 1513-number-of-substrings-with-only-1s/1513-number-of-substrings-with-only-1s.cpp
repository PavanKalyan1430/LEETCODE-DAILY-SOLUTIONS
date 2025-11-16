class Solution {
public:
    int numSub(string s) {
        
        long long  result = 0;
        long long add;
        long long    cnt = 0;
        long long MOD = 1e9 + 7;

        for (int i=0; i<s.size(); i++){

            if (s[i] == '0'){

                add =    ((cnt * (cnt+1)) / 2) % MOD; 
                result  = ( result + add) % MOD;
                cnt = 0;
            }

            else cnt+=1;

        }

        if (cnt){
            add =    ((cnt * (cnt+1)) / 2) % MOD; 
            result  = ( result + add) % MOD;
        }

        return result;
    }
};