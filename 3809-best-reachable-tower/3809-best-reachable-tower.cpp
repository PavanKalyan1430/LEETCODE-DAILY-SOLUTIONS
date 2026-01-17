class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {

        int max_quality = -1;
        int rx = -1, ry = -1; 
        
        for (int i=0; i<towers.size(); i++){

            int dist = abs(center[0] - towers[i][0]) + abs(center[1] - towers[i][1]);

            if (dist <= radius){
                if (towers[i][2] > max_quality){
                    max_quality = towers[i][2];
                    rx = towers[i][0];
                    ry = towers[i][1];
                }

                else if (towers[i][2] == max_quality){
                    if (rx > towers[i][0]){
                        rx = towers[i][0];
                        ry = towers[i][1];    
                    }

                    else if (rx == towers[i][0] && ry > towers[i][1]){
                        rx = towers[i][0];
                        ry = towers[i][1];
                    }
                }
            }
        }

        return {rx, ry};
    }
};