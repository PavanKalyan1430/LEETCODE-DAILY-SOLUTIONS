class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack <int> s;
        vector<int> result;
        vector <int> dup = nums;
        dup.insert(dup.end(), nums.begin(), nums.end());

        int sz = dup.size();
        int n = nums.size();

        result.push_back(-1);
        s.push(dup.back());

        for (int i =sz-2 ; i>=0; i--){
           

            while(!s.empty() && s.top() <= dup[i]) s.pop();

            if (s.size() == 0) result.push_back(-1);
            else result.push_back(s.top());

            s.push(dup[i]);

        }

       reverse(result.begin(), result.end());

        vector<int> ans;

        for (int i=0; i<n; i++) ans.push_back(result[i]);

        return ans;


    }
};