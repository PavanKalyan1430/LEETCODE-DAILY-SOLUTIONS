class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        
        unordered_set <int> s(nums.begin(), nums.end());

        int n = nums.size();
        int i, cnt = 0;
        int maxi = *max_element(nums.begin(), nums.end());


        for (i = 1; i<=maxi ; i++){
            if (!s.count(i)) cnt+=1;

            if (cnt == k) return i;
        }

        return  (i-1) + (k-cnt);
    }
};