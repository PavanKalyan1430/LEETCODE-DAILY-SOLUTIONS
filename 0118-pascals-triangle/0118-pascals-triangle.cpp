class Solution {
public:
    vector<vector<int>> generate(int n) {

        vector<vector<int>> result;

        result.push_back({1});



        for (int i=1; i<n ; i++){

            vector<int> vec(i+1, 1);

            for (int j = 1; j<i; j++){
                
                vec[j] = result[i-1][j-1] + result[i-1][j];
            }

            result.push_back(vec);

        }


        return result;

    }
};