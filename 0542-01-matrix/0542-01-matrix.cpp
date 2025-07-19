class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<vector<int>> dist(rows, vector<int>(cols, INT_MAX));
        queue<pair<int, int>> q;

        // Step 1: Push all 0s into the queue, set distance of 0s as 0
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (mat[i][j] == 0) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        // Step 2: Perform BFS from all 0s
        vector<int> dx = {0, -1, 0, 1};
        vector<int> dy = {1, 0, -1, 0};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (int k = 0; k < 4; ++k) {
                int newX = x + dx[k];
                int newY = y + dy[k];

                // Valid cell and shorter path found
                if (newX >= 0 && newY >= 0 && newX < rows && newY < cols) {
                    if (dist[newX][newY] > dist[x][y] + 1) {
                        dist[newX][newY] = dist[x][y] + 1;
                        q.push({newX, newY});
                    }
                }
            }
        }

        return dist;
    }
};
