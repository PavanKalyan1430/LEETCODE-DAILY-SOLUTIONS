class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int prefix_sum = 0;
        int result = 0;

        unordered_map <int, int> m;
        m[0] = 1;

        for(int i=0; i<nums.size(); i++){

            prefix_sum += nums[i];

            int comp =  prefix_sum - k;

            if (m.count(comp)){
                result += m[comp];
            }
            m[prefix_sum]++;

        }

        return result;
    }
};