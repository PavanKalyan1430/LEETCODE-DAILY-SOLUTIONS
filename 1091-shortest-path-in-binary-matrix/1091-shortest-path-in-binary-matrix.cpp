class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int columns = grid[0].size();
        int minutes = 1;

        if (grid[0][0] == 1 or grid[rows-1][columns-1] == 1) return -1;

        queue<pair<int,int>> q;
        q.push({0,0});

        vector<vector<int>> dx = { {0,1} ,{-1,0}, {0,-1} , {1,0}, {1,1} , {-1,-1}, {-1,1}, {1,-1} };

        while(q.size() > 0){
            minutes +=1;
            int size = q.size();


            for (int i=0; i<size; i++){
                pair<int,int> point = q.front();
                q.pop();

                for(int j=0; j<8; j++){
                    int x = point.first + dx[j][0];
                    int y = point.second + dx[j][1];

                    if (x>=0 and y>=0 and x<=rows and y<=columns and grid[x][y] == 0){

                        q.push({x,y});
                        grid[x][y] = 1;

                        if (x == rows-1 and y==columns-1) return minutes;
                    }

                }

                

            }


        }

        return -1;

    }
};