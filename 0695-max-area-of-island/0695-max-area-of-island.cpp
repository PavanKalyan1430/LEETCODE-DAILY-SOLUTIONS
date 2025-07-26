void DFS(vector<vector<int>> &grid, int i, int j, int &temp_count){
    
    int rows = grid.size();
    int columns = grid[0].size();

    if ( i== rows || j == columns || i<0 || j<0 || grid[i][j] != 1){
        return;
    }

    grid[i][j] = 0;
    temp_count +=1;

    DFS( grid, i, j+1 , temp_count);
    DFS( grid, i-1, j , temp_count);
    DFS( grid, i, j-1 , temp_count);
    DFS( grid, i+1, j , temp_count);
}

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int max_count = 0;
        int temp_count;

        int rows = grid.size();
        int columns = grid[0].size();

        for (int i=0; i<rows; i++){
            for (int j=0; j<columns; j++){

                if ( grid[i][j] == 1){
                    temp_count = 0;

                    DFS(grid, i, j, temp_count);

                    max_count = max(max_count, temp_count);
                }
            }
        }

        return max_count;

    }
};