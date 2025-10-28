class Solution {
public:
    int totalMoney(int n) {
        
        int inc = -1;
        int result = 0;

        for (int i=1; i<=n; i++){

            if (i % 7 == 1){
                inc++;
            }

            if (i % 7 == 0) result += (7+inc);

            else result += (i % 7 + inc);

            cout<<result<<" ";

        


        }

        return result;

    }
};