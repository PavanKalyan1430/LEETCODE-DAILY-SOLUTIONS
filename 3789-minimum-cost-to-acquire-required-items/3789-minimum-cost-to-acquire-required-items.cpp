class Solution {
public:
    long long minimumCost(int c1, int c2, int b, int n1, int n2) {
        
        long long result = 0;

        if (c1 + c2 <= b)  return (1LL * c1 * n1 + 1LL* c2* n2);

        else if (c1 >= b && c2>= b) return (1LL * b * (max(n1, n2)));

        else if (c1 + c2 > b){
            int less = min(n1, n2);
            result += (b * 1LL * less);
            n1 -= less ; n2-= less;
        }

        if (n1 > 0){
            int mincost = min(c1, b);
            result += (1LL * mincost * n1);
            n1 = 0;
        }

        if (n2 > 0){
            int mincost = min(c2, b);
            result += (1LL * mincost * n2);
            n2 = 0;
        }

        return result;


    }
};