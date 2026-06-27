class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> result;

        int top = 0;
        int down = matrix.size()-1;

        int left = 0;
        int right = matrix[0].size()-1;



        while (top <= down && left <= right){

            //left -> right

            for (int j= left; j<=right; j++){

                //cout<<top <<"  "<<j<<endl;

                result.push_back(matrix[top][j]);
            }
            top+=1;

            //top ->down;

            for (int i=top; i<=down ; i++){
                result.push_back(matrix[i][right]);
            }

            right-=1;


            if (top <= down){
                for (int j= right; j>=left; j-- ){
                    result.push_back(matrix[down][j]);
                }
            }

            down-=1;

            if (left <= right){
                for (int i= down; i>= top; i--){
                    result.push_back(matrix[i][left]);
                }
            }
            left+=1;



        }

        return result;

    }
};