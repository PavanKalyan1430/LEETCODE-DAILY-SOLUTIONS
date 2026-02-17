class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int result = 0, sum = 0;

        unordered_map <int , int> m;
        m[0] = 1;

        for (int i=0; i<nums.size(); i++){

            sum += nums[i];
            
            int comp = sum % k;
            int new_comp = (comp + k) % k;

            if (m.count(new_comp)){
                result += m[new_comp];
            }  

            m[new_comp]+=1;

        }

        return result;
    }
};