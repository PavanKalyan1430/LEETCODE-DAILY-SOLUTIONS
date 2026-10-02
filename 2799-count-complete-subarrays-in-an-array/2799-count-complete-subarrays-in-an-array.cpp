class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        

        unordered_set <int> sety (nums.begin(), nums.end());

        int k = sety.size();
        int cnt = 0;

        int left = 0;

        unordered_map <int, int> mp;

        for (int i=0; i<nums.size(); i++){

            mp[nums[i]]+=1;

            while (mp.size() >= k){

                cnt += nums.size() - i;

                mp[nums[left]]-=1;

                if (mp[nums[left]] == 0) mp.erase(nums[left]);

                left+=1;
            }

        }

        return cnt;

        

       
    }
};