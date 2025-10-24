class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& nums) {
        
        vector<int> result;

        int rows = nums.size();
        int columns = nums[0].size();

        for (int i = 0; i < columns; i++) {
            int maxi = 0;

            for (int j = 0; j < rows; j++) {
              //  cout << j << " " << i << endl;

                cout << nums[j][i] << endl;
                string s = to_string(nums[j][i]);
                int k = s.size();
                maxi = max(maxi, k);
            }

            result.push_back(maxi);
        }

        return result;

    }
};