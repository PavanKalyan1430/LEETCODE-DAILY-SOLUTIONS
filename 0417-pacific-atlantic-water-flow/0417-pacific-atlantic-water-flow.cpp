void DFS(vector<vector<int>>&heights, int rows, int columns, int i, int j, vector<vector<bool>> &ocean , int x, int y ){

    

    if (i == rows || j == columns || i<0 || j<0 || ocean[i][j] == true || heights[x][y]  > heights[i][j]) return;



    ocean[i][j] = true;

    DFS(heights,rows,columns, i, j+1, ocean, i, j);
    DFS(heights,rows,columns, i-1, j, ocean, i, j);
    DFS(heights,rows,columns, i, j-1 , ocean, i, j);
    DFS(heights,rows,columns, i+1, j , ocean, i, j);


}



class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        int rows = heights.size();
        int columns = heights[0].size();

        vector<vector<bool>> pacific(rows , vector<bool> (columns, false));
        vector<vector<bool>> atlantic(rows , vector<bool> (columns, false));

        for (int j=0; j<columns; j++){

            //top edge pacific i =0 j=0,1,2....
            DFS(heights,rows,columns, 0, j , pacific, 0, j);   
        }

        for (int i=0; i<rows; i++){

            // left edge pacific i= 0,1,2...   j =0
            DFS(heights, rows, columns, i, 0, pacific, i, 0 ) ;
        }


        for (int p=0; p<rows; p++){

             // right  edge atlantic p= 0,1,2...   q = columns-1
            DFS(heights, rows, columns, p, columns-1, atlantic, p, columns-1);
        }

        for (int q=0; q<columns; q++){

             // bottom edge atlantic = p=0   q = 0,1,2....
            DFS(heights, rows, columns, rows-1, q, atlantic,  rows-1, q );
        }

        vector<vector<int>> result;


        for (int i=0; i<rows; i++){
            for (int j=0; j<columns; j++){

                if (pacific[i][j] == true && atlantic[i][j] == true) result.push_back({i,j});

            }
        }

        return result;



    }
};