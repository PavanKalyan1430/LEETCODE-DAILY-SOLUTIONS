class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& nums) {
        
        int neg = 0;
        long long sum = 0, zero = 0;
        int rows = nums.size();
        int cols = nums[0].size();
        int mini = INT_MAX;

        for (int i=0; i<rows; i++){
            for (int j=0; j<cols; j++){

                if (nums[i][j] < 0){
                    neg +=1;
                }


                else if (nums[i][j] == 0) zero+=1;

                mini = min(abs(nums[i][j]), mini);
                sum += abs(nums[i][j]);

            }
        }

        if (neg % 2 == 0 || zero > 0) return sum;

        return sum - (2*mini);


    }
};