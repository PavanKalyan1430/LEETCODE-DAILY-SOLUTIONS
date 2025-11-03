class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

       //nums.push_back(nums[0]);


       int sumy = nums[0];
       int maxi = nums[0];

       for (int i=1; i<nums.size(); i++){

            if (sumy < 0) sumy = 0;

            sumy+= nums[i];
            maxi = max(maxi, sumy);

            

       } 

       return maxi;
    }
};