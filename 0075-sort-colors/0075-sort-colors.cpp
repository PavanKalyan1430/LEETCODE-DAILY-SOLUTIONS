class Solution {
public:
    void sortColors(vector<int>& nums) {


        // low should be at the end of 0

        // mid should be at the start of 2;

        // high should be at the end of 1

        int low = 0;
        int mid = 0;
        int high = nums.size()-1;

        while(mid <= high){
            if (nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
            }

            else if (nums[mid] == 0){
                swap(nums[low], nums[mid]);
                    low++;
                    mid++;

                
            }
            else mid++;
        }


        
    }
};