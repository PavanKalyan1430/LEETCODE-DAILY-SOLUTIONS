class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        vector<vector<int>> result;

        int s = nums.size()-1;

        result.push_back( nums);
        int prev = 0;

        for (int i=s; i>=1; i-- ){
            vector <int> temp;

            for (int j=0; j<i; j++ ){
                int ele = result[prev][j] + result[prev][j+1];
                temp.push_back( ele % 10 );
            }

            prev +=1;
            result.push_back(temp);
        }

       

        return result.back()[0];

    }
};