class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size()-1;
        int reached = n;


        for (int i = n-1; i>=0; i--){
            if ((nums[i] + i ) >= reached){
                reached = i;
            }  
        }

        return (reached == 0);


    }
};