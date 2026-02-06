class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        
        vector<vector<int>> visit(rows, vector<int>(cols, -1));
        visit[0][0] = 0;

        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>> , greater<>> q;

        q.push({0,0,0});

        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};

        while (!q.empty()){
            auto [changes , x, y] = q.top();
            q.pop();

            //cout<<x<<"  "<<y<<endl;

            //cout<<q.size()<<" ";

             if (x == rows-1 && y == cols-1) return changes;


            for (int k =0; k<4; k++){
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx >= rows || ny>= cols || nx<0 || ny<0) continue;
                
                int new_changes = changes;

                if (k == 0 && grid[x][y] != 1) new_changes+=1;
                else if (k == 1 && grid[x][y] != 4) new_changes+=1;
                else if (k == 2  && grid[x][y] != 2) new_changes+=1;
                else if (k == 3 && grid[x][y] != 3) new_changes+=1;

               // cout<<"hell ";

                if (visit[nx][ny] == -1 || visit[nx][ny] > new_changes){
                    visit[nx][ny] = new_changes;
                    q.push({new_changes, nx, ny});
                }
                
            }
        }

        return -1;

    }
};