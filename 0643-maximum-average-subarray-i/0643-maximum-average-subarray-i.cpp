class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double maxi  = INT_MIN;
        double sum = 0;
        int l = 0;

        for (int i=0; i<nums.size(); i++){

            sum += nums[i];

            if (i >= k-1){
                maxi = max(maxi , sum/k);
                sum -= nums[l++];
            }
        }

        return maxi;
    }
};