class Solution {
public:

    int best = 0;
    int totalGold = 0;

    int dx[4] = {0,-1,0,1};
    int dy[4] = {1,0,-1,0};

    void dfs(vector<vector<int>>& grid, int i, int j, int curr, int rem){

        if (curr + rem <= best) return;   // PRUNE

        best = max(best, curr);

        int val = grid[i][j];
        grid[i][j] = 0;                   // mark visited

        for (int k=0; k<4; k++){
            int nx = i + dx[k];
            int ny = j + dy[k];

            if (nx>=0 && ny>=0 &&
                nx<grid.size() && ny<grid[0].size() &&
                grid[nx][ny] > 0){

                dfs(grid, nx, ny,
                    curr + grid[nx][ny],
                    rem - grid[nx][ny]);
            }
        }

        grid[i][j] = val;                 // backtrack
    }

    int getMaximumGold(vector<vector<int>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        for (auto &r : grid)
            for (auto c : r)
                totalGold += c;

        for (int i=0; i<rows; i++){
            for (int j=0; j<cols; j++){
                if (grid[i][j] > 0){
                    dfs(grid, i, j,
                        grid[i][j],
                        totalGold - grid[i][j]);
                }
            }
        }

        return best;
    }
};
