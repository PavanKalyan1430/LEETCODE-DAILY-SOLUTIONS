class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        // Fill first column
        for (int i = 1; i < rows; i++) {
            grid[i][0] += grid[i-1][0];
        }

        // Fill first row
        for (int j = 1; j < cols; j++) {
            grid[0][j] += grid[0][j-1];
        }

        // Fill the rest of the grid using DP
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }

        return grid[rows - 1][cols - 1]; // Bottom-right cell
    }
};
