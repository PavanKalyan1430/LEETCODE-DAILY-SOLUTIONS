class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        //int flag = -1;
        bool firstrow = false;
        bool firstcolumn = false;
        int rows = matrix.size();
        int columns = matrix[0].size();

        for (int i=0; i<columns; i++){
            if (matrix[0][i] == 0){
                firstrow = true;
                break;
            }
        }

        for (int j=0; j<rows; j++){
            if (matrix[j][0] == 0){
                firstcolumn = true;
                break ;
            }
        }

        for (int i=1; i<rows ;i++){
            for (int j=1; j< columns; j++){

                if (matrix[i][j] == 0){

                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i=1; i<rows; i++){

            for (int j=1; j<columns; j++){

                if (matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        for (auto i : matrix){
            for (auto j : i) cout<<j<<" ";
            cout<<endl;
        }

        if (firstrow){
            for ( int i=0; i<columns; i++){
                matrix[0][i] = 0;
            }
        }

        if (firstcolumn){
            for ( int j=0; j<rows; j++){
                matrix[j][0] = 0;
            }
        }




        
    
    }
};