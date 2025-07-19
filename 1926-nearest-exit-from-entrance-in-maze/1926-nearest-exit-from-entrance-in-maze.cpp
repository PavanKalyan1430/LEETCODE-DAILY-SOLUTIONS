class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
        int a = entrance[0];
        int b = entrance[1];

        int rows = maze.size();
        int columns = maze[0].size();

        if(maze[a][b] == '+') return -1;

        int distance = 0;



        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};

        queue<pair<int,int>> q;

        q.push(  {a,b} );
        maze[a][b] = '+';

        while(q.size() > 0){
            distance +=1;
            int size = q.size();

            for (int i =0; i<size; i++){
                pair<int,int> point = q.front();
                q.pop();

                for (int j=0; j<4; j++){

                    int x = point.first + dx[j];
                    int y = point.second + dy[j];

                    if ( x < rows and y < columns and x>=0 and y>=0 and maze[x][y] =='.' ){
                        q.push( {x,y} );
                        maze[x][y] = '+';

                        if (x == 0 || y == 0 || x == rows-1 || y == columns-1){
                            return distance;
                        }

                    }
                }

                
            }

        }


        return -1;



    }
};