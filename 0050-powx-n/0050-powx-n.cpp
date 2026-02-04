double fun(double x , long long n){

    if ( n == 0) return 1;

    if (n < 0) return 1.0/fun(x, -n);

    if (n % 2 == 1) {
        return x* fun(x * x, (n - 1) / 2);
    } 
    
    else  return fun(x * x, n / 2);
    
}

class Solution {
public:
    double myPow(double x, int n) {
        
        long long  k = n;
        if (x == 0) return 0;

        double ans = fun( x, k );

        return ans;

    }
};