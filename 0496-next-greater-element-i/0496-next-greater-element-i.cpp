class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums) {
        
        unordered_map <int, int> m;
        stack <int> s;
        vector <int> res;

        s.push(nums.back());
        m[nums.back()] = -1;

        for (int i=nums.size()-2; i>=0; i--){

            while ( !s.empty() and s.top() < nums[i]) s.pop();

            if (s.size() == 0) m[nums[i]] = -1;
            else m[nums[i]] = s.top();

            s.push(nums[i]);
        }

        for (auto i : m){
            cout<< i.first <<" " << i.second<<endl; 
        }

        for (int i : nums1){

            if ( m.count(i) ) res.push_back(m[i]);
        }
        return res;

    }
};