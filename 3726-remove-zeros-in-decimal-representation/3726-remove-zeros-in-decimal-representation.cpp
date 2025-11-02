class Solution {
public:
    long long removeZeros(long long n) {
        
        long long k = 0;
        string s = to_string(n);

        for (int i =0; i<s.size(); i++){

            int rem = (s[i] - '0' );

            if (rem !=0 ){
                k = (k*10 ) + rem;
            }

        }

        return k;

    }
};