class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> distance(rows, vector<int>(cols, INT_MAX));

        distance[0][0] = 0;

        priority_queue <pair<int ,pair<int, int>> , vector<pair<int , 
            pair<int,int>>>, greater<pair<int, pair<int,int>>>> q;

        q.push({0, {0,0}});


        vector<int> dx = {0,-1, 0, 1};
        vector<int> dy = {1,0, -1, 0};

        while(!q.empty()){
            int dist = q.top().first;
            int x  =   q.top().second.first;
            int y  =   q.top().second.second;
            q.pop();

            if (x == rows-1 && y == cols-1) return distance[x][y];

            for (int k =0; k<4 ; k++){
                int i = x + dx[k];
                int j = y + dy[k];

                if (i<rows && j<cols && i>=0 && j>=0){
                    int d = abs(grid[i][j] - grid[x][y]);

                    d= max(d, dist);

                    if (d < distance[i][j]){
                        distance[i][j] = d;
                        q.push({d, {i,j}});
                    }
                }
            }
        }


        return -1;

    }
};