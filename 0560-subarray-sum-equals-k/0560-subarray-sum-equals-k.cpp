class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map <int , int> m;
        m[0] = 1;
        int count = 0;

        int prefix_sum = 0;


        for (int i=0; i<nums.size(); i++){
            
            prefix_sum += nums[i];
            int comp = prefix_sum - k;


            if (m.count(comp)){
                count += m[comp];
            }

            m[prefix_sum] += 1;
        }

        return count;
    }
};