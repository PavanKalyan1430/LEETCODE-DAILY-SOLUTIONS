class Solution {
public:
    long long getDescentPeriods(vector<int>& nums) {
        long long result = 0;
        long long k = 0;
        int  n = nums.size();
        int left = 0;
        int right = 0;

        if (n == 1) return 1;


        for (int right =0; right<n-1; right++){

            if (nums[right] - nums[right+1] != 1){

                k = right - left + 1;
                result += (k * (k+1)) / 2;
                left = right+1;
            }
            // cout<< result<<" ";
        }
            k = (n-1) - left + 1;
            result += (k * (k+1)) / 2;
                   

        return result;
    }
};