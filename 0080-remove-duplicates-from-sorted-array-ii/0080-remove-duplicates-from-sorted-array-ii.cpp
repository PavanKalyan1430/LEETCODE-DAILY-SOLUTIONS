class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

     if (nums.size() <=2) return nums.size();

    
     int h = 2;

     for (int i=2; i<nums.size(); i++){
        if (nums[i] != nums[h-2]){
            nums[h++] = nums[i];

        }
        
    }


    return h;


    }
};