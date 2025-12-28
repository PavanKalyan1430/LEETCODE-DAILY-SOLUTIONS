class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long result = 0;
        long long temp;
        
        while(need1 > 0 || need2 > 0){

            int n1 = 0, n2 = 0, b = 0;
            
            if (need1 > 0){
                n1 = cost1;  
            }

            if (need2 > 0){
                n2 = cost2;
            }

            if (need1 > 0 || need2 > 0){
                b = costBoth;
            }

            if (b <= (n1 + n2)){
                int mini;
                if (need1 == 0) mini = need2;
                else if (need2 == 0) mini = need1;
                else mini = min(need1, need2);
                
                result += (1LL * b * mini);
                need1-=mini; need2-=mini;
            }

            else{
                result += (1LL * n1 * need1 );
                result += (1LL * n2 * need2);
                need1 = 0; need2= 0;
            }

           // cout<<result<<" ";
            
        }

        return result;
        
    }
};