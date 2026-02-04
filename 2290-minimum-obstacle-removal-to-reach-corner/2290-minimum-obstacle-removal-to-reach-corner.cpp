class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> visit(rows, vector<int>(cols , -1));
        visit[0][0] = 0;

       priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> q;

        q.push({0,0,0});

        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};


        while( !q.empty()){

            auto [walls_removed, x, y] = q.top(); q.pop();

            if (visit[x][y] < walls_removed) continue;

            for (int k=0; k<4; k++){
                int nx = x +  dx[k];
                int ny = y +  dy[k];

                if (nx>= rows || ny>=cols || nx<0 || ny<0) continue;

                int new_walls = grid[nx][ny] + walls_removed;

                    if (visit[nx][ny] != -1 && visit[nx][ny] <= new_walls) continue;
                    
                    visit[nx][ny] = new_walls;
                    q.push({new_walls,nx, ny});


            }

        }


        return visit.back().back();



    }
};