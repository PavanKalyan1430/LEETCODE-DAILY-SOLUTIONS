class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int left = 0;
        int maxi = 0;

        long long changes = 0;

       if (nums.size() == 1) return 1;

        for (int right =1; right <nums.size(); right++){
            
            changes += ( 1LL * (right-left) * (nums[right] - nums[right-1]) );


            while (changes  > k ){
                changes -= (nums[right] - nums[left]);
                left+=1;
            }

            maxi = max(maxi , right-left+1);
        }

        return maxi;
    }
};