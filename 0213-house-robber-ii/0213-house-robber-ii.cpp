class Solution {
public:
    int rob(vector<int>& nums) {
        
         if (nums.size() == 1) return nums[0];

        // else if (nums.size() == 2) return 0;

        int result_1 = 0, result_2 = 0;
      
        // CASE 1 : EXCLUDING 1 ST HOUSE
        int sec_last = 0;
        int last = nums[1];

        result_1 = nums[1];

        for (int i=2; i<nums.size(); i++){
            result_1 = max(last , sec_last + nums[i]);
            sec_last = last;
            last = result_1;
        }


        // CASE 2 EXCLUDING THE LAST HOUSE

        sec_last = nums[0];
        last = max(nums[0], nums[1]);
        result_2 = last;


        for (int i=2; i<nums.size()-1; i++){
            result_2 = max(last , sec_last + nums[i]);
            sec_last = last;
            last = result_2;
        }

        return max(result_1, result_2);
    

    }
};