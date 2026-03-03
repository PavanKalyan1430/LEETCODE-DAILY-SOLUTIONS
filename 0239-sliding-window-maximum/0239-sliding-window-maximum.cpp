class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> result;

        deque<int> dq;

        int i =0;

        for (int right = 0; right<nums.size(); right++){

            while (!dq.empty() && nums[dq.back()] <= nums[right]) dq.pop_back();

            dq.push_back(right);

            if (right-k >= dq.front()) dq.pop_front();
            
            if (right >= k-1) result.push_back(nums[dq.front()]);

        }

        return result;



    }
};