void DFS(vector<vector<int>>& image, int i , int j , int r , int c, int old, int newy){

    if ( i == r || j == c || i<0 || j < 0 || image[i][j] == newy || image[i][j] != old) return;

    image[i][j] = newy;

    DFS(image, i, j+1, r, c , old, newy);
    DFS(image, i-1, j, r, c , old, newy);
    DFS(image, i, j-1, r, c , old, newy);
    DFS(image, i+1, j, r, c , old, newy);


}


class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int r = image.size();
        int c = image[0].size();
        int old_color = image[sr][sc];
        int new_color = color;

        DFS(image , sr, sc, r, c, old_color , new_color);

        return image;

    }
};