class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        deque <int> min_dq;
        deque <int> max_dq;

        int result = 0;
        int left = 0;

        for (int right=0; right<nums.size(); right++){

            // int a = nums[dq.front()];
            // int b = nums[right];

            while( !max_dq.empty() && nums[max_dq.back()] < nums[right]) max_dq.pop_back();
            max_dq.push_back(right);

            while( !min_dq.empty() &&  nums[min_dq.back()] > nums[right]) min_dq.pop_back();
            min_dq.push_back(right);

            while ( (!max_dq.empty() && !min_dq.empty()) && abs(nums[max_dq.front()] - nums[min_dq.front()] ) > limit ){

                if (!max_dq.empty() && max_dq.front() == left) max_dq.pop_front();
                if (!min_dq.empty() && min_dq.front() == left) min_dq.pop_front();

                left+=1;

            }

            result = max(result, right-left+1);

        }
        return result;

    }
};