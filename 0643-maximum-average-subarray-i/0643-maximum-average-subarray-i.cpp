class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double avg = 0, max_avg = INT_MIN;

        int left = 0;

        for (int right =0; right<nums.size(); right++){

            avg += nums[right];

            if (right - left + 1 == k){
                max_avg = max(max_avg, avg/k);
                avg -= nums[left];
                left+=1;
            }
        }

        return max_avg;
    }
};