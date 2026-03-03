class Solution {
public:
    int maxSatisfied(vector<int>& nums, vector<int>& grump, int min) {
    

        int left = 0;
        int sum = 0, s = 0, max_s = 0;

        for (int i=0; i<grump.size(); i++){
            if (grump[i] == 0){
                sum += nums[i];
            }
        }

        
        for (int right =0; right<nums.size(); right++){
            
            if (grump[right] == 1) s+= nums[right];

            if (right - left + 1 == min){
                max_s = max(max_s, s);
                
                if (grump[left] == 1) s-= nums[left];
                left+=1;
            }

        }

        return max_s + sum;


        
    }
};