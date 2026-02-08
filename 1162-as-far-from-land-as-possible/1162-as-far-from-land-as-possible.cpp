class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();


        queue<pair<int,int>> q;

        int distance = 0, zeroes = 0;

        for(int i=0; i<rows; i++){
            for (int j = 0; j<cols; j++){
                if (grid[i][j] == 0) zeroes +=1;
                else {
                    q.push({i,j});
                }
            }
        }

        if (zeroes == 0 || q.size() == 0) return -1; 

        vector<int> dx = {0,-1,0, 1};
        vector<int> dy = {1,0,-1,0};

        while (!q.empty()){
            distance +=1;
            int sz = q.size();

            for (int i=0; i<sz; i++){

                auto [x,y] = q.front(); q.pop();

                for (int k =0; k<4; k++){
                    int nx = x + dx[k];
                    int ny = y + dy[k];

                    if (nx>= rows || ny>= cols || nx<0 || ny<0 || grid[nx][ny] == 1)continue;

                    grid[nx][ny] = 1;
                    q.push({nx,ny});
                    zeroes-=1;
                }

                if (zeroes == 0) return distance;

            }
        }
        return -1;

    }
};