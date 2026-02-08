class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        
        int sum = 0;
        int n = nums.size()-1;
        for (auto i : nums) sum +=i;

        int currsum = 0, cnt =0;

        for (int i=0; i<nums.size()-1; i++){
            currsum += nums[i];

            int remsum = sum - currsum;

            if (nums[i] > remsum/(n-i) ) cnt+=1;
        }

        return cnt;
    }
};