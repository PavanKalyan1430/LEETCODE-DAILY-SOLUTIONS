class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int columns = grid[0].size();
        int perimeter = 0;

        for (int i=0; i<rows; i++){
            for (int j=0; j<columns; j++){

                if (grid[i][j] == 1){

                    if ( i== 0 ) perimeter+=1;
                    if (i == rows-1) perimeter +=1;

                    if ( j== 0 ) perimeter+=1;
                    if (j == columns-1) perimeter +=1;


                    if (j+1 < columns and grid[i][j+1] == 0) perimeter+=1; // right check

                    if (i-1 >= 0      and grid[i-1][j] == 0) perimeter+=1; // top check

                    if (j-1 >= 0      and grid[i][j-1] == 0) perimeter+=1; // left check

                    if (i+1 < rows     and grid[i+1][j] == 0) perimeter+=1; // down check

                }

            }
        }

        return perimeter;

    }
};