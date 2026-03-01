class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int left = 0;
        int mid = 0;
        int right = nums.size()-1;


        while (mid <= right){
            if (nums[mid] == 2){
                swap(nums[mid], nums[right]);
                right-=1;
            }

            else if (nums[mid] == 0){
                swap(nums[left], nums[mid]);
                left+=1; mid+=1;
            }

            else mid+=1;
        }



    }
};