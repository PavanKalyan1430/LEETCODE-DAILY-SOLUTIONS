class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

       


       int sumy= nums[0] , sumy_mini=  nums[0];
       int maxi = nums[0], mini = nums[0];

       int total_sum =0;
       total_sum = accumulate(nums.begin(), nums.end(), 0);

       

       for (int i=1; i<nums.size(); i++){

            if (sumy < 0) sumy = 0;

            sumy+= nums[i];
            maxi = max(maxi, sumy); 

            if (sumy_mini > 0) sumy_mini =0;
            sumy_mini += nums[i];
            mini = min(mini, sumy_mini);
       } 

        cout<<total_sum<<endl<<mini<<endl<<maxi;

        if (total_sum == mini) return maxi;

        if ( mini < 0){
            return max(total_sum - mini, maxi);
        }

        return total_sum;

        // else return max(total_sum, maxi);



    }
};