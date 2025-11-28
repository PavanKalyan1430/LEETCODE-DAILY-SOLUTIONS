class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> result(n);

        int odd = 1;
        int even = 0;


        for (int i=0; i<n; i++){
            if (nums[i] % 2 == 0){
                result[even] = nums[i];
                even+=2;
            }

            else{
                result[odd] = nums[i];
                odd+=2;
            }
        }

        return result;
    }
};