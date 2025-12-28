class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int c = grid[0].size()-1;

        int cnt = 0;
        int r = 0;

        while( r<n && c>=0 ){

            if (grid[r][c] < 0){
                cnt += (n-r);
                c-=1;
            }

            else r+=1;

        }

        return cnt;
    }
};