class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> visit(rows , vector<int>(cols, -1));

        priority_queue<tuple<int,int,int> , vector<tuple<int,int,int>> , greater<> > q;

        if (grid[0][0] == 1){
            q.push({1, 0, 0});
        }
        else q.push({0, 0, 0});
        health -=1;

        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};

        while (!q.empty()){
            auto [h , x, y] = q.top(); q.pop();

            if (x == rows-1 && y == cols-1) return true;

            for (int k=0; k<4; k++){
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx>= rows || ny>= cols || nx<0 || ny<0) continue;

                int new_health = h + grid[nx][ny];

               // ..cout<<new_health<<" ";

                if (new_health > health) continue;


                if (visit[nx][ny] == -1 || visit[nx][ny] > new_health){
                    visit[nx][ny] = new_health;
                    q.push({new_health , nx, ny});
                }

            }

        }

        return false;



    }
};