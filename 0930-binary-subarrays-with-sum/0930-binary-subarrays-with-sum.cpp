class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        int prefix_sum  =0, ans = 0;
        unordered_map <int , int> m;
        m[0] = 1;

        for (int i=0 ; i<n; i++){
            prefix_sum += nums[i];

            int comp = prefix_sum - target;
        
            if (m.count(comp)){
                ans += m[comp];
            }
            
            m[prefix_sum]+=1;

        }

        return ans;
    }
};