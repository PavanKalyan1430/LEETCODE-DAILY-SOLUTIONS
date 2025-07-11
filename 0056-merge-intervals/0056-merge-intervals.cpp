class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector <int>> result ;

        result.push_back(intervals[0]);

        for (auto i : intervals){

            if (i[0] <= result.back()[1]){
                result.back()[0] = min(result.back()[0], i[0]);
                result.back()[1] = max(result.back()[1], i[1]);
            }

            else result.push_back(i);

        } 
        return result;
        
    }
};