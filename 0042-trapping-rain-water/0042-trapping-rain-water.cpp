class Solution {
public:
    int trap(vector<int>& heights) {
        
        vector<int> left_max;
        vector<int> right_max;

        int result = 0;


        int l_max = 0;
        int r_max = 0;

        for (int i=0; i<heights.size(); i++){
            l_max = max(l_max, heights[i]);
            left_max.push_back(l_max);
        }

        vector<int> new_heights = heights;

        for (int i=new_heights.size()-1; i>=0; i--){
            r_max = max(r_max, heights[i]);
            right_max.push_back(r_max);
        }

        reverse(right_max.begin(), right_max.end());

    

        for (int i: right_max) cout<<i<<" ";


        cout<<endl;


        for (int i: left_max) cout<<i<<" ";

        for (int i =0; i<heights.size(); i++){
            result+=  ( min(left_max[i], right_max[i]) - heights[i] );
        }

        return result;
    }
};