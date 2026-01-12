
void DFS(vector<vector<char>>&grid, vector<vector<int>>&visit, int i , int j, int r , int c){
    
    if (i == r || j == c || i<0 || j<0 || visit[i][j] || grid[i][j] == 'X') return;
    
    visit[i][j] = 1;
    grid[i][j] = '#';
    
    DFS(grid, visit, i ,   j+1, r , c);
    DFS(grid, visit, i-1, j,    r , c);
    DFS(grid, visit, i,    j-1, r , c);
    DFS(grid, visit, i+1,  j,   r , c);
}






class Solution {
public:
    void solve(vector<vector<char>>& grid) {
         // Code here
        
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> visit(r,vector<int>(c,0));
        
        
        for (int i=0; i<r; i++){
            if (!visit[i][0] && grid[i][0] == 'O'){
                DFS(grid, visit, i, 0,r,c);
                
            }
        }
        
        for (int i=0; i<r; i++){
            if (!visit[i][c-1] && grid[i][c-1] == 'O'){
                DFS(grid, visit, i, c-1,r,c);
                
            }
        }
            
            
            
        
        
        
        for (int i=0; i<c; i++){
            if (!visit[0][i] && grid[0][i] == 'O'){
                DFS(grid, visit, 0, i,r,c);
                
            }
        }
            
            
        
        for (int i=0; i<c; i++){
            if (!visit[r-1][i] && grid[r-1][i] == 'O'){
                DFS(grid, visit, r-1, i,r, c);
                
            }
        }
        
        
        for (int i=0; i<r; i++){
            for (int j =0; j<c; j++){
                if (grid[i][j] == '#' ) grid[i][j] = 'O';
                else grid[i][j] = 'X';
            }
        }
    }
};


