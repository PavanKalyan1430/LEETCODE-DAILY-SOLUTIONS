class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> result ;

        result.push_back({1});
        for (int i=1; i< n; i++){
            vector <int> temp;
            for (int j= 0; j<=i ; j++){

                if ( j == 0 || j == i) temp.push_back(1);

                else {
                    temp.push_back( result[i-1][j-1] + result[i-1][j] );
                }
                
            }

            result.push_back(temp);

        }

        return result;

        
    }
};