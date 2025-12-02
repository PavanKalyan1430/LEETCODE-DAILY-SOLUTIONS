class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int j =1;
        int i =0;

        int n = nums.size();

         while (i < n && j < n) {
            if (nums[i] % 2 == 0) {
                // correct element at even index
                i += 2;
            } 
            
            else if (nums[j] % 2 == 1) {
                // correct element at odd index
                j += 2;
            }
            
            else{
                // nums[i] is odd and nums[j] is even -> swap them
                swap(nums[i], nums[j]);
                i += 2;
                j += 2;
        }
    }
    
        return nums;
    }
};