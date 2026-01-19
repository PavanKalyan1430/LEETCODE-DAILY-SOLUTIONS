int fun(int n , vector<int>& dp){

    if (n == 0 || n== 1) return n;

    if (dp[n] != -1) return dp[n];

    int first = fun(n-1, dp) ;
    int second = fun(n-2, dp);

    dp[n] = first + second;

    return dp[n];


}

class Solution {
public:
    int fib(int n) {
        
        if (n == 0 || n== 1) return n;

        vector<int> dp(n, -1);

        return fib(n-1) + fib(n-2);
    }
};