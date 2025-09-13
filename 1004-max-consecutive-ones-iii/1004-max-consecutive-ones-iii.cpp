class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int left = 0;
        int zero_count = 0;
        int maxlen = 0;

        for (int right=0; right<nums.size(); right++ ){

            if (nums[right] == 0) zero_count++;

            while (zero_count >k){
                if (nums[left] == 0){
                    zero_count-=1;
                }
                left++;
            }

            maxlen = max(maxlen , right-left+1);


        }

        return maxlen;
    }
};