class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        
        int n = nums.size();

        long long  total;

        total = accumulate(nums.begin(), nums.end(), 0LL);

        int rem = total % p;
        int minlen = INT_MAX;

        if (total %  p == 0) return 0;

        unordered_map <int , int> m;
        m[0] = -1;
        int sum = 0;

        for (int i=0; i<n; i++){
            sum += nums[i];
            int prefmod = sum % p;

            int comp = (prefmod - rem + p) % p;

            if (m.count(comp)){
                minlen = min(minlen , i-m[comp]);
            } 

            m[prefmod] = i;
            
        }

        return (minlen == n) ? -1 : minlen ;
    }
};

