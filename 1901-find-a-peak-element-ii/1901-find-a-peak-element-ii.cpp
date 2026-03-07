int get_row(vector<vector<int>>&mat, int c){

    int maxi = 0;
    int index = 0;

    for (int i=0; i<mat.size(); i++){
        if (mat[i][c] > maxi){
            maxi = mat[i][c];
            index = i;
        }
    }

    //cout<<index;
    return index;

}

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int rows = mat.size();
        int cols = mat[0].size();

        int left = 0;
        int right = cols-1;

        while (left <= right) {

            int mid = (left+right)/2;
            int c  = mid;
            int r = get_row(mat,c);

            int ll = (c == 0) ? -1 : mat[r][c-1];
            int rr = (c == cols-1) ? -1 : mat[r][c+1];


            cout<<mid<<endl;
           // cout<<ll<<"   "<<rr<<endl;

            if ( mat[r][c] > ll && mat[r][c] > rr ) return {r,c};
            else if (mat[r][c] < rr) left = mid+1;
            else right = mid-1; 
            
        }
        return {-1,-1};
        
    }
};