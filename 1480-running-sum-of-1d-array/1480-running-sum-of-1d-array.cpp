class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int p_sum = 0;

        for (int &i: nums){
            p_sum += i;
            i = p_sum;
        }

        return nums;

    }
};