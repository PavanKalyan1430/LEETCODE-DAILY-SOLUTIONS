class Solution {
public:
    int trap(vector<int>& heights) {
        
        vector <int> left;
        vector <int> right(heights.size());
        int result = 0;

        int left_max_height = 0;
        int right_max_height = 0;

        for(int i=0; i<heights.size(); i++){

            left_max_height = max(left_max_height, heights[i]);

            left.push_back(left_max_height);

        }

        for(int i=heights.size()-1; i>=0 ; i--){

            right_max_height = max(right_max_height, heights[i]);

            right[i] =  right_max_height;

        }

        for(int i: left) cout<<i<<" ";

        cout<<endl;


        for (auto j : right) cout<<j<<" ";

        for (int i=0; i<heights.size(); i++){
            result +=( min(left[i], right[i]) - heights[i]);
        }


        return result;








    }
};