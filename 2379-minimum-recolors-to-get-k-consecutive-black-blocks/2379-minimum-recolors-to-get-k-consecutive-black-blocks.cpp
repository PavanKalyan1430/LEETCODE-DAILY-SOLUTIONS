class Solution {
public:
    int minimumRecolors(string nums, int k) {
        
        int left  = 0;
        int result  = nums.size();

        int white_count  =0;

        for (int right = 0 ;right < nums.size(); right++){

            if (nums[right] == 'W') white_count +=1;

            if (right - left + 1 == k){
                result = min (result , white_count);

                if (nums[left] == 'W') white_count -=1;
                left+=1;
            }
        }

        return result;

    }
};