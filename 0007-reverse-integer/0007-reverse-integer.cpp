class Solution {
public:
    int reverse(int x) {
        
        long long rev = 0;
        int num = x;

        while (num != 0){

            rev = (rev * 10) + (num % 10 );
            num = num / 10;

        }
        

        if (rev > INT_MAX or rev < INT_MIN) return 0;
        // else if (x < 0) {
            
        // }
        else return rev;

    }
};