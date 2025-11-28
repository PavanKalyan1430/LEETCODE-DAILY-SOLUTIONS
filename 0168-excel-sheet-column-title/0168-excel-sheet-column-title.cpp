class Solution {
public:
    string convertToTitle(int num) {
        
        //cout<< 10 / 26;

        string res = "";

        while( num > 0){

            int rem = (num % 26);

            res += (rem == 0) ? 'Z' : (rem+64);

            num = (num-1) / 26;

            if (num == 0) break;


        }

        reverse(res.begin(), res.end());

        return res;
    }
};