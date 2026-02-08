void DFS(vector<vector<int>>& grid, vector<vector<int>>&visit,int i, int j, int r, int c){
    
    
    if (i == r || j == c || i<0 || j<0  || grid[i][j] == 0) return;

    //visit[i][j] = 1;
    grid[i][j] = 0;

    DFS(grid, visit, i,j+1, r, c);
    DFS(grid, visit, i-1,j, r, c);
    DFS(grid, visit, i,j-1, r, c);
    DFS(grid, visit, i+1,j, r, c);

}

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
        int r = grid.size();
        int c = grid[0].size();
        int cnt = 0;

        vector<vector<int>> visit(r, vector<int>(c,0));

        for (int i =0; i<r; i++){
            if (grid[i][0] == 1) DFS(grid, visit, i, 0, r, c);
        }

        for (int i =0; i<r; i++){
            if (grid[i][c-1] == 1) DFS(grid, visit, i, c-1, r, c);
        }

        for (int i =0; i<c; i++){
            if (grid[0][i] == 1) DFS(grid, visit, 0, i, r, c);
        }

        for (int i =0; i<c; i++){
            if (grid[r-1][i] == 1) DFS(grid, visit, r-1, i, r, c);
        }

        for (int i=0; i<r ; i++){
            for (int j =0; j<c; j++){
                if (grid[i][j] == 1) cnt +=1;
            }
        }

        return cnt;
    }
};