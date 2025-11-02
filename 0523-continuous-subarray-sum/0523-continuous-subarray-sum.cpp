class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map <int, int> m;

        m[0] = -1;

        int prefix_sum = 0;
        int comp, len;

        for (int i=0; i<nums.size(); i++){

            prefix_sum += nums[i];

            comp = prefix_sum % k;

            if (m.count(comp)){
                cout<<comp<<" ";

               len = i-m[comp];

               if (len >=2 ) return true;
            }

            else m[comp] = i;

        }

        return false;

    }
};