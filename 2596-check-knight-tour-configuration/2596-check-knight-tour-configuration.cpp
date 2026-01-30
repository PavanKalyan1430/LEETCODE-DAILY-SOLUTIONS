class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();

    if (grid[0][0] != 0) return false;

    vector<pair<int,int>> moves = {
        {2,1}, {2,-1}, {-2,1}, {-2,-1},
        {1,2}, {1,-2}, {-1,2}, {-1,-2}
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int k = grid[i][j];
            if (k == n*n - 1) continue;

            bool found = false;

            for (auto [dx, dy] : moves) {
                int x = i + dx;
                int y = j + dy;

                if (x >= 0 && y >= 0 && x < n && y < n &&
                    grid[x][y] == k + 1) {
                    found = true;
                    break;
                }
            }
            if (!found) return false;  // fail fast
        }
    }

    return true;

    }
};