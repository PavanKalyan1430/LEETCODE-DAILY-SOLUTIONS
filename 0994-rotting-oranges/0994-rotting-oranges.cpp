class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
         queue<pair<int, int>> q;
        int min = 0;
        
        
        int r = grid.size();
        int c = grid[0].size();
        
        
        int fresh = 0;
        int rotten  = 0;
        
        
        for (int i=0; i<r; i++){
            for (int j = 0; j<c; j++){
                
                if (grid[i][j] == 2){
                    q.push({i,j});
                }
                
                else if (grid[i][j] == 1) fresh+=1;
            }
        }
        
        if (fresh == 0) return 0;
        
        vector<int> dx = {1,0,-1,0};
        vector<int> dy = {0,-1,0,1};
        
        while(!q.empty()){
            
         
            
            min += 1;
            int siz = q.size();
            
            
            for (int p = 0; p<siz; p++){
                
                pair <int ,int> node = q.front();q.pop();
                
                int x = node.first;
                int y = node.second;
                
                for (int k =0; k<4; k++){
                    int i = x + dx[k];
                    int j = y + dy[k];
                    
                    if (i < r && j < c && i>= 0 && j>= 0 && grid[i][j] == 1){
                        fresh -=1;
                        grid[i][j] = 2;
                        q.push({i,j});
                        
                        
                    }
                    
                if (fresh == 0) return min;
                }
            }
            
            
        }
        
        return -1 ;
    }
};

