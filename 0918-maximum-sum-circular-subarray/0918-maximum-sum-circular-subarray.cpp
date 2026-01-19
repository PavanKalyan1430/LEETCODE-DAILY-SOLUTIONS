class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int total = 0;
        total = accumulate(nums.begin(), nums.end(), 0);

        int max_subarray_sum = nums[0] ;
        int max_result = nums[0];

        int min_subarray_sum = nums[0];
        int min_result = nums[0];

        for (int i=1; i<nums.size(); i++){

            // fiding the minimum subarray sum
            if (min_subarray_sum > 0) min_subarray_sum = 0;

            min_subarray_sum += nums[i];

            min_result = min(min_result, min_subarray_sum);


            // finding the maximum subarray sum
            if (max_subarray_sum < 0) max_subarray_sum = 0;

            max_subarray_sum += nums[i];

            max_result = max(max_result, max_subarray_sum);
        }

        // max_subarray_sum is negative it means it is a single element whcih       
        //is negative and also the largest among all negative number (ex: -1 , -10, 100) :  [ans is -1]
        if (max_result < 0){
            return max_result;
        }

        // now we have two options either the max_result can be 
        //the maximum or the total - minimum subarray

       return max(max_result, total- min_result);
    
    }
};