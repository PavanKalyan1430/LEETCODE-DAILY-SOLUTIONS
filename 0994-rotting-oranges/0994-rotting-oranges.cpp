class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int minutes = 0;

        int fresh = 0;
        int rotten = 0;

        queue<pair<int,int>>q;

        int rows = grid.size();
        int columns = grid[0].size();



         for (int i=0; i<rows; i++){
            for (int j= 0; j<columns; j++){
                if ( grid[i][j] == 1){
                    fresh+=1;
                }

                else if (grid[i][j] == 2){
                    rotten +=1;
                    q.push({i,j});
                }
            }
         }

         if (fresh == 0) return 0;
         if ( rotten == 0) return -1;

         vector <int> dx = {0, -1, 0, 1};
         vector <int> dy = {1, 0, -1, 0};

         while ( q.size() > 0)  {

            minutes +=1;
            int size = q.size();

            for (int i=0; i<size; i++){

                pair<int, int> point = q.front();
                q.pop();

                for (int j=0; j<4; j++){
                    int x = point.first + dx[j];
                    int y = point.second + dy[j];

                    if ( x>= 0 and y>=0 and x<rows and y<columns  and grid[x][y] == 1){
                        grid[x][y] = 2;
                        fresh -=1;
                        q.push({x,y});
                        if ( fresh == 0) return minutes;
                    }
                }

            }

         }

         return -1;

    }
};