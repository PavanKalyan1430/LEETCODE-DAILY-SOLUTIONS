class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map <int, int> m;
        int prefix_sum = 0, result = 0;
        int comp, new_comp;

        m[0] = 1;

        for (int i=0; i<nums.size(); i++){

            prefix_sum += nums[i];

             comp = prefix_sum % k;
             new_comp = (comp + k) % k;

            if (m.count(new_comp)){
                result += m[new_comp];
            }

            m[new_comp] +=1;
        }

        return result;

    }
};