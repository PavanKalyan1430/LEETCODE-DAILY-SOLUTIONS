class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> dq;
        vector<int> result;


        for (int i=0 ; i<nums.size(); i++){

            while(!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
            dq.push_back(i);

            if (!dq.empty() && i-k >= dq.front()) dq.pop_front();
            cout<<dq.front();

            if (!dq.empty() && i+1 >=k) result.push_back(nums[dq.front()]);
        }

        return result;
    }
};