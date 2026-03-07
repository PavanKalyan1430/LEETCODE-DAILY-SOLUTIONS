class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        
        int range = nums.size()-k;
        int total = accumulate(nums.begin(), nums.end(), 0);
        int min_sum = INT_MAX;
        int left = 0, sum =0;

        if (k == nums.size()) return total;

        for (int right=0; right<nums.size(); right++){

            sum += nums[right];

            if (right -left + 1 == range){
                min_sum = min(min_sum , sum);
                sum -= nums[left];
                left+=1;
            }
        }

        return  total - min_sum; 

    }
};