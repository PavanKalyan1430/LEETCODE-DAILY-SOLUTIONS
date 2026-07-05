class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        


        int min_sum = nums[0], total = nums[0];
        int max_sum =  nums[0];

        int pos = nums[0];
        int neg = nums[0];

        for (int i=1; i<nums.size(); i++){

            if (pos < 0) pos = 0;
            pos += nums[i];
            max_sum = max(max_sum , pos);

            if (neg > 0) neg = 0;
            neg += nums[i];
            min_sum = min(min_sum , neg);

            total += nums[i];

        }

        // if all are negative elements {-1,-10,100} -1 will be ans
        if (max_sum < 0) return max_sum;

        // now we have two cases , total , toatl - min_sum

        return max(max_sum, total-min_sum);


    }
};