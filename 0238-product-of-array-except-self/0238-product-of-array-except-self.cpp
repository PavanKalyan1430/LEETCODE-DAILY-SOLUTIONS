class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int zero = 0;
        int product = 1;
        int n = nums.size();
        int zero_index;

        vector<int> res(n , 0);

        for (int i: nums){
            if (i != 0) product *= i;
        }

        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 0){
                zero +=1;
                 zero_index = i;
            }
        }

        if (zero > 1){
            return res;
        }

        else if (zero == 1) {
            res[zero_index] = product;
            return res;
        }

        for (int i= 0 ; i<n; i++){
            if (nums[i] == 0) res[i] = product;
            else res[i] = product / nums[i];
        }

        return res;
    }
};