class Solution {
public:
    int mySqrt(int x) {
        
        long long left = 1;
        long long right = x;
        long long  mid , ans;


        while (left <= right){
            mid = (left + right) / 2;

            if ( mid * mid == x) return mid;

            if (mid  * mid < x){
                ans = mid;
                left = mid+1;
            }

            else right = mid-1;

        }

        return ans;

    }
};