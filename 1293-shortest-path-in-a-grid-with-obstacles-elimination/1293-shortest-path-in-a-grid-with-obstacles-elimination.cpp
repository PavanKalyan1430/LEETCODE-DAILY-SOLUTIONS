class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {

        int rows = grid.size();
        int cols = grid[0].size();

        // dp[r][c] = minimum walls removed to reach (r,c)
        vector<vector<int>> dp(rows, vector<int>(cols, -1));

        // queue stores: x, y, walls_removed, distance
        queue<vector<int>> q;
        q.push({0, 0, 0, 0});

        dp[0][0] = 0;

        vector<int> dx = {0, -1, 0, 1};
        vector<int> dy = {1, 0, -1, 0};

        while (!q.empty()) {
            auto cur = q.front();
            q.pop();

            int x = cur[0];
            int y = cur[1];
            int walls_removed = cur[2];
            int dist = cur[3];

            // destination reached
            if (x == rows - 1 && y == cols - 1)
                return dist;

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                // bounds check
                if (nx < 0 || ny < 0 || nx >= rows || ny >= cols)
                    continue;

                int new_walls = walls_removed + grid[nx][ny];

                // cannot exceed k
                if (new_walls > k)
                    continue;

                // dominance check
                if (dp[nx][ny] != -1 && dp[nx][ny] <= new_walls)
                    continue;

                dp[nx][ny] = new_walls;
                q.push({nx, ny, new_walls, dist + 1});
            }
        }

        return -1;
    }
};
