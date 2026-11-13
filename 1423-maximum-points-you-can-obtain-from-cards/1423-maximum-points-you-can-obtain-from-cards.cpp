class Solution {
public:
    int maxScore(vector<int>& nums, int k) {

        //  WE NEED TO FIND THE K SIZED SUB ARRAY  WHERE THE SUBARRAY SUM IS MAXIMUM

        // BUT WE CAN PICK THE ELEMENTS FROM ANY SIDE 

       // SO WE NEED TO FIND THE SUBBARY OF SIZE  (NUMS.SIZE() - K ) WITH MINIMUM SUM

       // AND AFTER SUBTRACTING THIS FROM THE TOTAL SUM  WE WILL GET TEH RESULT;


        int sum = 0;
        int total = accumulate(nums.begin(), nums.end(), 0);
        int range  = nums.size() - k, min_sum = total; 
        int left = 0;

        if (k == nums.size()) return total;

        for (int right  = 0; right < nums.size() ; right++){

            sum += nums[right];

            if (right-left+1 ==  range){
                min_sum = min(sum , min_sum);
                sum -= nums[left++];
            }
        }

        return  total - min_sum;


    }
};