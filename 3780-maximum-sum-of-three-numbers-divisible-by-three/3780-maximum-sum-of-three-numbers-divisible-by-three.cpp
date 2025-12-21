class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        vector<int> rem0, rem1, rem2;
        int result = 0;

        for (int i=0; i<nums.size(); i++){

            int r = nums[i] % 3;

            if (r == 0) rem0.push_back(nums[i]);
            else if (r == 1) rem1.push_back(nums[i]);
            else rem2.push_back(nums[i]);

        }

        sort(rem0.rbegin(), rem0.rend());
        sort(rem1.rbegin(), rem1.rend());
        sort(rem2.rbegin(), rem2.rend());


        if (rem0.size() > 0 && rem1.size() > 0 and rem2.size() > 0 ){
            result = max(result , rem0[0] + rem1[0] + rem2[0]);
        }

        if (rem0.size() >= 3) {
            result = max(result, rem0[0]+ rem0[1] + rem0[2]);
        }

        if (rem1.size() >= 3){
            result = max(result, rem1[0] + rem1[1]+ rem1[2]);
        }
        
        if (rem2.size() >= 3){
            result = max(result, rem2[0] + rem2[1] + rem2[2]);
        }


        return result;



    }
};