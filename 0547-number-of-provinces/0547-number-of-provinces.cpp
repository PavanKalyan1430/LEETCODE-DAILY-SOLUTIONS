void DFS(vector<vector<int>>& mat, int i , int j, int r , int c){

    if (i == r || j == c || i<0 || j<0 || mat[i][j] == 0) return;

    mat[i][j] = 0;

    DFS(mat, i, j+1, r, c);
    DFS(mat, i-1, j, r, c);
    DFS(mat, i, j-1, r, c);
    DFS(mat, i+1, j, r, c);

    DFS(mat, i-1, j-1, r, c);
    DFS(mat, i+1, j+1, r, c);
    DFS(mat, i-1, j+1, r, c);
    DFS(mat, i+1, j-1, r, c);
}


class Solution {
public:
    int findCircleNum(vector<vector<int>>& mat) {
        
        int count = 0;

        int r  = mat.size();
        int c = mat[0].size();

        for (int i=0; i<r; i++){
            for(int j = 0; j<c; j++){

                if (mat[i][j] == 1){
                    count += 1;
                    DFS(mat, i, j, r , c);
                }
            }
        }
       



        return count ;
    }
};