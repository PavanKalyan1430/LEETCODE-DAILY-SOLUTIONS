class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        

        int result  = 0;
        int left  = 0;
        int product = 1;

        if (k  <= 1) return 0;

        for (int right  = 0; right < nums.size(); right++){

            product = product * nums[right];

  
            while (product >= k){
                product = product / nums[left];
                left+=1;
            }

            result += (right - left + 1);
        }

        return result;

        
    }
};