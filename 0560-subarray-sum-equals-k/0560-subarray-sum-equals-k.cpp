class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map <int, int> m;
        m[0] = 1;


        int sum = 0;
        int subarray_count = 0;


        for (int i=0; i<nums.size(); i++){

            sum+= nums[i];

            int comp = sum - k;

            if (m.count(comp)){
                subarray_count += m[comp];
            }

            m[sum]++;

        }

        return subarray_count;


    }
};