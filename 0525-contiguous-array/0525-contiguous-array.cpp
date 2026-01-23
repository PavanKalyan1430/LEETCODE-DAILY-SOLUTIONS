class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n = nums.size();
        int max_len = 0 , len;


        for (int i=0; i<nums.size(); i++) nums[i] = (nums[i] == 0) ? 1 : -1;

        int prefix_sum = 0;
        unordered_map <int , int> m;
        m[0] = -1;


        for (int i : nums) cout<<i<<" ";

        for (int i=0; i<n; i++){
            prefix_sum += nums[i];

            if (m.count(prefix_sum)){
                len = i - m[prefix_sum];

                max_len = max(len , max_len);
            }

            else m[prefix_sum] =   i;
        }

        return max_len;
    }
};