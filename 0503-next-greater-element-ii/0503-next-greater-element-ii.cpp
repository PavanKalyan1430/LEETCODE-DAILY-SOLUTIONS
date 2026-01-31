class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack <int> s;
        int n = nums.size();

        for (int i=0; i<n; i++) nums.push_back(nums[i]);

        int sz = nums.size();
        vector<int> result(sz);
       
        for (int i =sz-1; i>=0; i--){
           

            while(!s.empty() && s.top() <= nums[i]) s.pop();

            if (s.size() == 0) result[i] = -1;
            else result[i] = s.top();

            s.push(nums[i]);

        }

        vector<int> ans;
        for (int i=0; i<n; i++) ans.push_back(result[i]);
        return ans;


    }
};