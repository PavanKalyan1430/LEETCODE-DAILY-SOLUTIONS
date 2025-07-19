class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        



        int ones = 1;
        int zeroes = 0;
        int minutes = 0;

        int rows = grid.size();
        int columns = grid[0].size();

        queue<pair<int,int>> q; 

        for (int i=0; i<rows ; i++){
            for (int j= 0 ; j<columns ; j++){

                if (grid[i][j] == 1){
                    ones+=1;
                    grid[i][j] = -1;}

                else if (grid[i][j] == 0){
                    zeroes+=1;
                    q.push({i,j});
                }
            }
        }

        if (ones == 0) return grid;

        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};

        while (q.size() > 0){
            minutes +=1;

            int size = q.size();

            for (int i=0; i<size; i++){
                pair <int,int> point = q.front();
                q.pop();

                for (int j=0; j<4; j++){
                    int x = point.first + dx[j];
                    int y = point.second + dy[j];

                    if ( x >=0 and y>=0 and x<rows and y<columns and grid[x][y] == -1 ){
                        q.push({x,y});
                        grid[x][y] = minutes;
                        ones -=1 ;
                    }
                }

                if (ones == 0) return grid;
            }
        }

        return grid;
    }
};