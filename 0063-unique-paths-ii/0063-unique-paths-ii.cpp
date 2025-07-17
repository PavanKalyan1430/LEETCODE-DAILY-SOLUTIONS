class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        
        int m = Grid.size();        // rows size
        int n = Grid[0].size();     // columns size

        vector<vector<int>> DP(m,vector<int> (n,0));

        if (Grid[0][0] == 1) return 0;

        for (int i=0; i<m; i++){
           if (Grid[i][0] != 1) DP[i][0] = 1; 
           else break; 
        }
        

        for (int j =0; j<n; j++){
            if (Grid[0][j] != 1) DP[0][j] = 1;
            else break;
        }


        for (int i=1; i<m; i++){
            for (int j=1; j<n; j++){

                if (Grid[i][j] != 1){
                    DP[i][j] = DP[i-1][j] + DP[i][j-1];
                }

                else DP[i][j] = 0;
            }
        }

        return DP.back().back();

    }
};