void FUN(int i, int j , int k, vector<vector<int>>&grid, bool &ans){

    int rows = grid.size();
    int cols = grid[0].size();

    if (ans) return;

    if (i>=rows || j >= cols || i<0 || j<0 || grid[i][j] != k) return ;

   
    if (k == (rows*cols - 1)){
        ans  = true;
        return;
    }

                 FUN(i+2, j+1, k+1, grid, ans) ; 
                 FUN(i+2, j-1, k+1 , grid, ans) ;
                 FUN(i-2, j+1, k+1 , grid, ans) ;
                 FUN(i-2, j-1, k+1 , grid, ans) ;

                 FUN(i+1, j+2, k+1 , grid, ans) ;
                 FUN(i+1, j-2, k+1 , grid, ans) ;
                 FUN(i-1, j+2, k+1 ,grid, ans)  ;
                 FUN(i-1, j-2, k+1 , grid, ans) ;

    return ;

}


class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {

        if (grid[0][0] != 0) return false;

        //unordered_map <int , pair<int,int>> m;

        int rows = grid.size();
        int cols = grid[0].size();
        bool ans = false;

        FUN(0,0,0,grid, ans);
        return ans;
    }
};