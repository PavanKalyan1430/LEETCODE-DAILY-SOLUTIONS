class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int maxi = *max_element(nums.begin(), nums.end());

        int cnt = 0;
        int left = 0;

        long long result = 0;

        for (int right=0; right<nums.size(); right++){
            if (nums[right] == maxi) cnt +=1;

            while (cnt >= k){
                result += (nums.size()- right);

                if (nums[left] == maxi) cnt-=1;
                left +=1;
            }
        }

        return result;
    }
};