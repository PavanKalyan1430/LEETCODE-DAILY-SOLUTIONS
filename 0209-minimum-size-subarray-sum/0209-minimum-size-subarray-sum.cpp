class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        

        int left = 0;
        int sumy = 0;

        int min_len = INT_MAX;
        int len;


        for (int right =0; right <nums.size(); right++){

            sumy += nums[right];

            while ( sumy >= target){

                    len = (right- left) + 1;
                    min_len = min(min_len , len);
            
                    sumy -= nums[left];
                    left +=1;
            }

        }

        return (min_len != INT_MAX) ? min_len : 0;


    }
};