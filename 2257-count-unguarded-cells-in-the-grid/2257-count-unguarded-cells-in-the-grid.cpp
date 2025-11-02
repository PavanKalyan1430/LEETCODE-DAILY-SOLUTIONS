class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        
        int rows = m;
        int columns = n;
        int result = 0;



        vector<vector<char>> nums(rows, vector<char>(columns, '.'));


        for (auto i : guards){
            int x = i[0];
            int y = i[1];
            nums[x][y] = 'G';
        }

        for (auto i : walls){
            int x = i[0];
            int y = i[1];
            nums[x][y] = 'W';
        }

        for (auto p: guards){

            int a = p[0];
            int b = p[1];

            for (int i=a-1; i>=0; i--){

                 if (nums[i][b] == 'W' || nums[i][b] == 'G') break;
                  nums[i][b] = '#';
                

            }

            for (int i=a+1; i<rows; i++){
                 if (nums[i][b] == 'W' || nums[i][b] == 'G') break;
                  nums[i][b] = '#';
            }

             for (int i=b-1; i>=0; i--){
                if (nums[a][i] == 'W' || nums[a][i] == 'G') break;
                nums[a][i] = '#';
            }

            for (int i=b+1; i<columns; i++){
              if (nums[a][i] == 'W' || nums[a][i] == 'G') break;
                 nums[a][i] = '#';
            }
        }
        

                    
        for (auto i : nums){
            for (auto j : i) cout<<j<<" ";
            cout<<endl;
        }

        for (auto i : nums){
            for (auto j : i){
                if (j == '.') result+=1;
            }
            
        }

        return result;
    }
};