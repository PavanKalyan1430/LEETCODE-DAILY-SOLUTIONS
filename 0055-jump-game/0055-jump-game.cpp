class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size()-1;
        int reached = n;

        int maxi = 0;

        for (int i=0; i<nums.size()-1; i++){      
            maxi = max(maxi, nums[i] + i);

            if (maxi < i+1) return false;
        }

        if (maxi >= n) return true;
        else return false;



    }
};