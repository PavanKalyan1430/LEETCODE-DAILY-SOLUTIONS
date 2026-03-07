class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        int total = accumulate(nums.begin(), nums.end(), 0);

        int n = nums.size();
        int range = 2*n;

        int left = 0, min_swaps = INT_MAX, sum = 0;

        for (int right = 0; right<range; right++){

            sum+= (right < n) ? nums[right] : nums[right % n];

            if (right-left+1 == total){
                min_swaps = min(min_swaps , total - sum);

                int ele = (left < n) ? nums[left] : nums[left % n];

                if (ele == 1) sum-=1;
                left+=1;
            }

        }

        return (min_swaps == INT_MAX) ? 0 : min_swaps;

    }
};