class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int num = n;
        int prev = -1;


        while (num > 0){
            int dig = num & 1;

            if (prev != -1 && prev == dig) return false;
            prev = dig;

            num = num >> 1;
        }

        return true;

    }
};