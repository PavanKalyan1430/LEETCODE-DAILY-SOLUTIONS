class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int pos = nums.size()-2;

        int last_pos = nums.size()-1;

        while (pos >= 0){
            if (nums[pos] + pos >=  last_pos ){
                last_pos = pos;
            }
            pos-=1;

        }

        return last_pos == 0;
    }
};