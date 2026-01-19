class Solution {
public:
    int tribonacci(int n) {

         if (n == 0) return 0;

         if (n==1 || n == 2) return 1;

        int third_last = 0, curr;
        int sec_last = 1;
        int last =  1;

        for (int i= 3; i<=n; i++ ){
            
            curr = last + sec_last + third_last ;

            third_last = sec_last;
            sec_last = last;
            last = curr;
           
        }

        return curr;

    }
};