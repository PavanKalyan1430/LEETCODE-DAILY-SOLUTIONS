class Solution {
public:
    bool isOneBitCharacter(vector<int>& nums) {
        
        int used = 0;
        
        for (int i=0; i<nums.size(); i++){

            if (nums[i] == 0) used = 0;
            else{
                used = 1; 
                i+=1;}
        }

        return used == 0;

    }
};