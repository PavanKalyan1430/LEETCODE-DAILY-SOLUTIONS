class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        long long result = 0;
        int left = 0;
        int right = nums.size()-1;

        for (int i=0; i<nums.size(); i++) nums[i] = abs(nums[i]);

        sort(nums.rbegin(), nums.rend());

        while (left <= right){

            result += ( 1LL * nums[left] * nums[left]);

            left +=1;

            if (left > right) break;

            result -= (1LL * nums[right] * nums[right]);

            right-=1;


        }

        return result;
    }
};