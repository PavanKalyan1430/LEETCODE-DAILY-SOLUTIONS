class Solution {
public:
    int orangesRotting(vector<vector<int>>& nums) {
        
        queue<pair<int,int>> q;

        int fresh = 0;
        int min = 0;

        int rows = nums.size();
        int cols = nums[0].size();

        for (int i=0; i<rows; i++){
            for (int j =0; j<cols ; j++){
                
                if (nums[i][j] == 1) fresh+=1;
                else if (nums[i][j] == 2){
                    q.push({i,j});
                }
            }
        }

        if (fresh  == 0) return 0;

        vector<int> dx = {0,-1,0,1};
        vector<int> dy = {1,0,-1,0};

        while (!q.empty()){

            min +=1;

            int sz = q.size();
            for (int i=0; i<sz; i++){

                auto [x,y] = q.front();  q.pop();

                for (int k =0; k<4; k++){

                    int m = x + dx[k];
                    int n = y + dy[k];

                    if (m<rows && n<cols && m>=0 && n>=0 && nums[m][n] == 1){
                        nums[m][n] = 2;
                        fresh -=1;
                        q.push({m,n});

                    }

                }

                if (fresh == 0) return min;

                
            }

        }

        return -1;
    }
};