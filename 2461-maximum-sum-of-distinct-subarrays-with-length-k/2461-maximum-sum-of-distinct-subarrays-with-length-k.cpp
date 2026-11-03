class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        unordered_map <int , int> m;


        int left  =0;
        long long sum = 0,  maxi = 0;
        

        for (int right =0; right<nums.size(); right++){

            m[nums[right]]+=1;
            sum  += nums[right];

            if (right-left+1 == k){

                if (m.size() == k) maxi = max(maxi , sum);

                sum -= nums[left];
                m[nums[left]]-=1;

                if (m[nums[left]] == 0) m.erase(nums[left]);

                left+=1;
            }

        }

        return maxi;

    }
};