class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int h = 0;
        int cnt = 1;

        int i;


        for ( i=0; i<nums.size()-1; i++){
           
            if (cnt <= 2){
                nums[h] = nums[i];
                h+=1;
            }

             (nums[i] == nums[i+1]) ? cnt+=1 : cnt = 1;

        }

        if (cnt <= 2) nums[h++] = nums[i];


        return h;
    
    }


    
};