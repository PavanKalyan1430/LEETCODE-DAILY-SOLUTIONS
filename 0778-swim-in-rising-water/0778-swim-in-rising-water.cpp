class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> difference(rows, vector<int>(cols, INT_MAX));

        difference[0][0] = 0;

        priority_queue <pair<int ,pair<int, int>> , vector<pair<int , 
            pair<int,int>>>, greater<pair<int, pair<int,int>>>> q;

        q.push({grid[0][0], {0,0}});


        vector<int> dx = {0,-1, 0, 1};
        vector<int> dy = {1,0, -1, 0};  // FOR 4 DIRECTIONS

        while(!q.empty()){

            // Differnce (LEAST DifferenceCE WILL BE IN FIRST IN THE MIN HEAP)
            int diff = q.top().first;     

            // THEN THE ROW, COL
            int x  =   q.top().second.first;
            int y  =   q.top().second.second;
            q.pop();

            // WHEN WE POP THE ROW AND COL IF THEY ARE THE DESTINATION INDICES , THEN WE CAN RETURN THE ANS, CUZ
            //IN FUTURE THERE CAN BE SO SMALLER DISTANCE THAN THIS AS PQ MAKES SURE WE ALWAYS COMES FROM THE SMALLEST DISTANCE PATHS

            if (x == rows-1 && y == cols-1) return diff;

            for (int k =0; k<4 ; k++){
                int i = x + dx[k];
                int j = y + dy[k];

                if (i<rows && j<cols && i>=0 && j>=0){
                    // int d = abs(grid[i][j] - grid[x][y]);
                    int d = grid[i][j];

                    // IN THE PATH WE NEED THE MAX ABS DIFF
                    d= max(d, diff);

                    // AND AMONG THOSE ALL MAX ABS DIFF WE NEED THE SMALLEST ONE 
                    if (d < difference[i][j]){
                        difference[i][j] = d;

                        // ONCE WE GOT A DISTANCE THAT IS SMALLER ONE WE NEED TO 
                        //PUSH IN TO PQ (JUST LIKE CLASIC DIJKISTRA ALGO)
                        q.push({d, {i,j}});
                    }
                }
            }
        }


        return difference.back().back();
    }
};