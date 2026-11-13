class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int n  = nums.size(), result  = 0;

        for (int i=0; i<n; i++){
            if (nums[i] % 2 == 0) nums[i] = 0;
            else nums[i] = 1;
        }

        unordered_map <int  , int> m;
        m[0] = 1;

        int sum  = 0;

        for (int i=0; i<n; i++){

            sum  += nums[i];

            int comp = sum - k;

            result += m[comp];
            m[sum]+=1;

        }

        return result;

    }
};