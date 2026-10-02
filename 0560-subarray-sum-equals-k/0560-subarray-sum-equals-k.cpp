class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map <int , int> m;
        m[0] = 1;

        int sum  = 0, cnt = 0;

        for (int i=0; i<nums.size(); i++){

            sum += nums[i];

            int comp = sum - k;

            if (m.count(comp)){
                cnt += m[comp];
            }

            m[sum]+=1;

        }

        return cnt;

    }
};