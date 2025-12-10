class Solution {
public:
    int countPermutations(vector<int>& nums) {
       
       for (int i=1; i<nums.size(); i++){
        if (nums[0] >= nums[i]) return 0;
       }

       int mod = 1e9 + 7;
       long long res = 1;

        for (int i=1; i<nums.size(); i++){

            res = ( ( 1LL * res * i) % mod    );
        }
        return res;
    }
};