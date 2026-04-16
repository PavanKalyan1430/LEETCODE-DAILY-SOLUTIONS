class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {

     vector<int> result;

     for (int i=0; i<matrix.size(); i++){
        
        int sum = accumulate(matrix[i].begin(), matrix[i].end(), 0);
        result.push_back(sum);
     }

     return result;

    }
};