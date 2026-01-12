class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
       
       int result = 0;

       for (int i=0; i<points.size()-1; i++){
        int currx = points[i][0];
        int curry = points[i][1];

        int nextx = points[i+1][0];
        int nexty = points[i+1][1];

        result += max(abs(currx-nextx) , abs(curry-nexty));
       }

       return result;
        
    }
};