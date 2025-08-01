class Solution {
public:
    vector<int> getRow(int numRows) {
        
        vector<vector<int>> result(numRows+1);

        result[0] = {1};
        
        for (int i=1; i<=numRows; i++){
            vector<int> temp;        
            for (int j =0; j<=i; j++){

                if (j == 0 || j== i) temp.push_back(1);

                else temp.push_back( result[i-1][j-1] + result[i-1][j]);
                
            }
            result[i] = temp;

        }

        return result.back();
    }
};

