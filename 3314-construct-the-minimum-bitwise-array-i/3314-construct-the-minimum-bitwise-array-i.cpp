class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        
        vector<int> result(nums.size());

        for (int i=0; i<nums.size(); i++){
            int ory = 0;
            int flag = 1;

            for (int j =0; j<=nums[i] ; j++){
                ory = j | j+1;
                if (ory == nums[i] ){
                    result[i] = j;
                    flag  = 0;
                    break;
                }

                
            }

            if (flag) result[i] = -1; 
        }

        return result;
    }
};