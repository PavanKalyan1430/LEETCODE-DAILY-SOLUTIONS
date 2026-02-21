bool prime(int num){

    if (num <= 1) return false;

    for (int i=2; i<num; i++){

        if (num % i == 0) return false;
    }

    return true;

}

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        
        int cnt = 0;

        for (int i = left; i<= right; i++ ){

            int num = __builtin_popcount(i);

            if (prime(num)) cnt +=1;

        }

        return cnt;
    }
};