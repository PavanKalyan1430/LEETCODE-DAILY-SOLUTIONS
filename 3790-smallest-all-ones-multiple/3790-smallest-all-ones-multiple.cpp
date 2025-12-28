class Solution {
public:
    int minAllOneMultiple(int k) {
        
        int num = 1;
        int rem = k;

        for (int i=1; i<=k ; i++){

            if (num % k == 0) return i;

            num = (num * 10  + 1) % rem;
        }

        return -1;

    }
};