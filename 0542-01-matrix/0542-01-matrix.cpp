class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        
        queue<pair<int, int>> q;
        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};

        int r = grid.size();
        int c = grid[0].size();

        int ones = 0, min =0 ;
        
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                if (grid[i][j] == 0){
                    q.push({i,j});
                }

                else{
                    ones += 1;
                    grid[i][j] = -1;
                }
            }
        }

        if (ones == 0) return grid;

        while (!q.empty()){
            min +=1;

            int s = q.size();

            for (int p =0; p<s; p++){
                pair <int, int> node = q.front(); q.pop();

                int x = node.first;
                int y = node.second;

                for (int k = 0; k<4; k++){
                    int i = x + dx[k];
                    int j = y + dy[k];

                    if (i>=0 && j>=0 && i<r && j<c && grid[i][j] == -1){
                        grid[i][j] = min;
                        ones-=1;
                        q.push({i, j});
                    }

                    if (ones == 0) return grid;
                }
            }
        }

        return grid;



    }
};