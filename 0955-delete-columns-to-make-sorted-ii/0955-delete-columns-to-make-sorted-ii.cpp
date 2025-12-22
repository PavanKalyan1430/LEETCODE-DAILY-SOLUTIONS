class Solution {
public:
    int minDeletionSize(vector<string>& strs) {

        int n = strs.size();
        int m = strs[0].size();
        int cnt = 0;

        vector <bool> sorted(n-1, false);

        for (int col =0; col <m; col++){

            bool bad = false;

            for (int row = 0; row <n-1; row++){

                if (!sorted[row] && strs[row][col] > strs[row+1][col]){
                    bad = true;
                    cnt +=1;
                    break;
                }


            }

            if (bad) continue;

            for (int i=0; i<n-1; i++){
                if (!sorted[i] and strs[i][col] < strs[i+1][col]) sorted[i] = true;
            }
        }


        return cnt;
    }
};