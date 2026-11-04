class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        

        int result  = 0;
        int left  = 0;

        int flips = 0;

        for (int right  = 0; right < nums.size(); right++){

            if (nums[right] == 0) flips+=1;

            while (flips > k){
                if (nums[left++] == 0) flips-=1;
            }

            result  = max(result , right-left+1);
        }

        return result;
    }
};