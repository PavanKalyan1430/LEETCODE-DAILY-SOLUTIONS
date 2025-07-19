class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int rotten = 0;
        int fresh = 0;
        int minutes = 0;

        int rows = grid.size();
        int columns = grid[0].size();

        queue<pair<int,int>> q; 

        for (int i=0; i<rows ; i++){
            for (int j= 0 ; j<columns ; j++){

                if (grid[i][j] == 1) fresh+=1;

                else if (grid[i][j] == 2){
                    rotten+=1;
                    q.push({i,j});
                }
            }
        }

        if (fresh == 0) return 0;
        if (rotten == 0) return -1;

        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};

        while (q.size() > 0){
            minutes +=1;

            int size = q.size();

            for (int i=0; i<size; i++){
                pair <int,int> point = q.front();
                q.pop();

                for (int i=0; i<4; i++){
                    int x = point.first + dx[i];
                    int y = point.second + dy[i];

                    if (x >=0 and y>=0 and x<rows and y<columns and grid[x][y] == 1){
                        q.push({x,y});
                        grid[x][y] = 2;
                        fresh -=1;
                    }
                }

                if (fresh == 0) return minutes;
            }

        }

        if (fresh == 0) return minutes;
        else return -1;
            
        

    }
};