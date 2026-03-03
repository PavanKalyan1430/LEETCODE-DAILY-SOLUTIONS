class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int target) {
        
        int cnt = 0, sum = 0;
        unordered_map <int,int> m;
        m[0] = 1;

        for (int i=0; i<nums.size(); i++){

            sum += nums[i];

            int comp = sum - target;

            if (m.count(comp)){
                cnt += m[comp];
            }

            m[sum]+=1;
        }
        return cnt;
    }
};