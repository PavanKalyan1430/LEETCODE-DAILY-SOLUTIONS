class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int rows = mat.size();
        int cols = mat[0].size();

        if (rows * cols != r*c) return mat;

        vector<int> store;

        for (auto i : mat){
            for (auto  j : i) store.push_back(j);
        }

        vector<vector<int>> result(r , vector<int>(c)) ;

        int index = 0;

        for (int i = 0; i<r ; i++){
            for (int k = 0; k<c; k++){
                result[i][k] = (store[index++]);
            }
        }

        return result;
    }
};