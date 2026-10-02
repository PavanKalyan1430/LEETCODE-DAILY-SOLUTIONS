class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        vector<long long> prefix;
        prefix.push_back(0);

        unordered_map<int, int> check;

        long long sum = 0;
        long long max_sum = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];
            prefix.push_back(sum);

            // Need nums[i] - k
            if (check.count(nums[i] - k)) {

                int pref_index = check[nums[i] - k];

                long long s = prefix[i + 1] - prefix[pref_index];

                max_sum = max(max_sum, s);
            }

            // Need nums[i] + k
            if (check.count(nums[i] + k)) {

                int pref_index = check[nums[i] + k];

                long long s = prefix[i + 1] - prefix[pref_index];

                max_sum = max(max_sum, s);
            }

            if (check.count(nums[i])) {
                // Keep the index that gives the minimum prefix sum for this number value
                    if (prefix[i] < prefix[check[nums[i]]]) {
                        check[nums[i]] = i;
                    }
                }

            else check[nums[i]] = i;
                
            // Store first occurrence
            // if (!check.count(nums[i])) {
            //     check[nums[i]] = i;
            // }
        }

        return max_sum == LLONG_MIN ? 0 : max_sum;
    }
};