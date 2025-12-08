class Solution {
public:
    int countTriples(int n) {
        

        int cnt = 0;
        
        for (int i =1 ; i<=n-2; i++){

            for (int j = i+1; j<=n-1; j++){

                for (int k = j+1; k<=n; k++){

                    if (pow(k,2) == (pow(i,2) + pow(j,2)) ){
                        cnt +=2;
                    }
                }
            }
        }

        return cnt;

    }
};