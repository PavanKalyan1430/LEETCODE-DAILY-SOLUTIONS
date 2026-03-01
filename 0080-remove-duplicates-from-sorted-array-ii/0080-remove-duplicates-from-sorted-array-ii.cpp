class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int left = 0;
        int  n = nums.size();

        for (int right=0; right<nums.size(); right++){
            
            if ( right >= n-2 || nums[right] != nums[right+2]){
                nums[left] = nums[right];
                left+=1;
            }
        }

        return left;
    }
};