class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int m = matrix.size();    //row size
        int n = matrix[0].size();  // column size  (however in this case m == n as square matrix)


        for (int i=1; i<m; i++){

            for (int j=0; j<n; j++){

                if (j==0) matrix[i][j] = matrix[i][j] + min(matrix[i-1][j] , matrix[i-1][j+1]);

                else if ( j== n-1) matrix[i][j] = matrix[i][j] + min(matrix[i-1][j] , matrix[i-1][j-1]);

                else matrix[i][j] = matrix[i][j] + min( matrix[i-1][j] , min( matrix[i-1][j+1], matrix[i-1][j-1] ));

            }
        }

        for (auto i : matrix){
            for (auto j : i) cout<<j<<" ";
            cout<<endl;
        }


        return *min_element(matrix.back().begin(), matrix.back().end());


    }
};