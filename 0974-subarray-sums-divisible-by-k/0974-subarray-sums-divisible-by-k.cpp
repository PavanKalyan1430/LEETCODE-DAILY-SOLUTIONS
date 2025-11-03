class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int result =0;
        int sumy = 0;

        unordered_map <int, int> m;
        m[0] = 1;


        for (int i=0; i<nums.size(); i++){

            sumy += nums[i];
            int comp = sumy % k;
            comp = (comp+k) % k;

            if (m.count(comp)){
                result += m[comp];
            }

            m[comp]++;


        }

            return result;
    }
};