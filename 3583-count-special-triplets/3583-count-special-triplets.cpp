class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        

            int mod = 1e9 + 7;
            long long  cnt = 0;

            int n = nums.size();
            vector <int> prefix(n);
            vector<int> suffix(n);

            unordered_map <int, int> m;

            for (int i=0; i<nums.size(); i++){
                int num = nums[i] * 2;
                prefix[i] = m[num]; 
                m[nums[i]] += 1;
            }

            m.clear();

            for (int i=nums.size()-1; i>=0; i--){
                int num = nums[i]*2;
                suffix[i] = m[num];
                m[nums[i]]+=1;
            }


            for (int i=0; i<n; i++){
                cnt = (cnt + (1LL * prefix[i] * suffix[i])) % mod;
            }
            // for (auto i : prefix) cout<<i<< " ";
            // cout<<endl;
            // for (auto i : suffix) cout<<i<< " ";

            return cnt;
    }
};