void DFS(vector<vector<char>>& grid, int i ,int j, int r , int c, vector<int>&dx , vector<int>&dy){

    for (int k = 0; k<4 ; k++){
        int x = i + dx[k];
        int y = j+ dy[k];

        if (x < r and y < c and x>=0 and y >=0 and grid[x][y] != '0'){
            grid[x][y] = '0';
            DFS(grid, x, y, r, c, dx, dy);

        }

    }

}


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int  count = 0;
        int r = grid.size();
        int c = grid[0].size();

        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};

        for (int i=0; i<r; i++){
            for (int j = 0; j<c; j++){

                if (grid[i][j] == '1'){
                    grid[i][j] = '0';
                    count +=1 ;
                    DFS(grid, i, j, r, c, dx, dy);
                }

            }
        }


        return count;

    }
};