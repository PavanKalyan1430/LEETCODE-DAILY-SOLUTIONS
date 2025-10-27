class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int last = nums2.back();

        bool inRange = false;
        int minExtra = INT_MAX;
        long long result = 0;

        // Step 1: Base operation cost
        for (int i = 0; i < n; i++) {
            result += abs(nums1[i] - nums2[i]);
        }

        // Step 2: Check if last is in any pair's range and find min extra
        for (int i = 0; i < n; i++) {
            int lo = min(nums1[i], nums2[i]);
            int hi = max(nums1[i], nums2[i]);
            if (lo <= last && last <= hi)
                inRange = true;

            minExtra = min({minExtra, abs(nums1[i] - last), abs(nums2[i] - last)});
        }

        // Step 3: If not in range, add minimum extra
        if (!inRange)
            result += minExtra;

        // Step 4: Always add 1 for the append operation
        return result + 1;
    }
};
