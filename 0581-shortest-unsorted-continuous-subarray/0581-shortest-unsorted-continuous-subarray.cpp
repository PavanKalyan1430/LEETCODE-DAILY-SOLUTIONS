class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int left = 0;
        int n = nums.size();
        int right = n-1;


        while (left+1 < n && nums[left] <= nums[left+1]) left+=1;

        while (right-1 >=0 && nums[right] >= nums[right-1]) right-=1;

        if (left >= right) return 0;


        int s = left , e = right;
        int mini = INT_MAX , maxi = INT_MIN;

        for (int i=s; i<=e ; i++){
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }
        while (left-1 >=0 && nums[left-1] > mini ) left-=1;
        while (right +1 < n && nums[right+1] < maxi ) right+=1;

        return right-left+1;
    }
};