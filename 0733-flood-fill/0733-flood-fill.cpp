void DFS(vector<vector<int>> & image, int rows, int columns, int i , int j, int old_color, int new_color){

    if (i == rows || j == columns || i<0 || j<0 || image[i][j] != old_color || image[i][j] == new_color){
        return ;
    }

    image[i][j] = new_color;

    DFS(image, rows, columns, i, j+1, old_color, new_color);

    DFS(image, rows, columns, i-1, j, old_color, new_color);

    DFS(image, rows, columns, i, j-1, old_color, new_color);

    DFS(image, rows, columns, i+1, j, old_color, new_color);

}


class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int rows = image.size();
        int columns = image[0].size();
        int i =sr;
        int j = sc;

        int old_color = image[sr][sc];
        int new_color = color;

        DFS(image, rows, columns, i, j, old_color, new_color );

        return image;

    }
};