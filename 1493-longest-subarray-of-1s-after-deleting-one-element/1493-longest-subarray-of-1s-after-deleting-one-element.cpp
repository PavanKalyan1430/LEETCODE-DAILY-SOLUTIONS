class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int left = 0;
        int maxlen = 0;
        int one_count = 0;
        int zero_count = 0;

        for (int right = 0; right < nums.size(); right++){

            if (nums[right] == 0)  zero_count+=1;
            

            while (zero_count > 1){
                if (nums[left] == 0){
                    zero_count -=1;
                }
                left+=1;
            }

            maxlen = max(maxlen , right-left+1);
        }

        return maxlen -1 ;


    }
};