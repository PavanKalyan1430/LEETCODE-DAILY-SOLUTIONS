class Solution {
public:
    int countDays(int n, vector<vector<int>>& nums) {
        
        sort(nums.begin(), nums.end());


        vector<vector<int>> result;
        result.push_back(nums[0]);



        for (int i=1; i<nums.size(); i++){
            if (result.back()[1] >= nums[i][0]){
                result.back()[1] = max(result.back()[1], nums[i][1]);
            }

            else {
                result.push_back(nums[i]);
            }
        }

       int st_miss = result[0][0] - 1;
       int last_miss = n-result.back()[1];
       int miss = 0;

       for (int i =1; i<result.size(); i++){
            miss += (result[i][0] - result[i-1][1] - 1);
        }



        return st_miss + miss + last_miss ;
    }
};