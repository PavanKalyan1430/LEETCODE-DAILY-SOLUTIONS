class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        for (int i= 0; i<nums.size(); i++){
            if (nums[i] % 2 == 0) nums[i] = 0;
            else nums[i] = 1;
        }

        unordered_map <int, int> m;
        m[0] = 1;
        int prefix_sum = 0, result = 0;

        for (int i =0; i<nums.size(); i++){
            prefix_sum += nums[i];

            int comp = prefix_sum - k;

            if (m.count(comp)){
                result += m[comp];
            }

            m[prefix_sum] += 1;
        }

        return result;
    }
};