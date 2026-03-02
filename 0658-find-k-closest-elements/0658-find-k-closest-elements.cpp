class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {

        int n = nums.size();

        int right = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
        int left = right - 1;

        deque<int> result;

        while (k-- > 0) {

            int a = (left >= 0) ? abs(nums[left] - x) : INT_MAX;
            int b = (right < n) ? abs(nums[right] - x) : INT_MAX;

            if (a <= b) {
                result.push_front(nums[left--]);
            }
            else {
                result.push_back(nums[right++]);
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};