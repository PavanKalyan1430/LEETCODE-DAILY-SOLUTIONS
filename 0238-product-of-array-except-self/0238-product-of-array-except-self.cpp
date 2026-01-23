class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> suffix(n, 1);
        vector<int> prefix(n, 1);
        vector<int> result(n)

        int pro = nums[0];

        for (int i=1; i<nums.size(); i++){
            prefix[i] = pro;
            pro = pro * nums[i];
        }

        pro = nums.back();

        for (int i=nums.size()-2; i>=0; i--){
            suffix[i] = pro;
            pro = pro * nums[i];
        }

        // for (auto i : prefix) cout<<i<<" ";
        // cout<<endl;

        // for (auto i : suffix) cout<<i<<" ";

        for (int i=0; i<result.size(); i++){
            result[i] = suffix[i] * prefix[i];
        }
        return result;
    }
};