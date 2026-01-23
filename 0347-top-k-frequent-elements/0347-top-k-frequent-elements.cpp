class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // priority_queue<pair<int, int>, vector<pair<int, int>>> q;
        int n = nums.size();

        vector <int> result;
        vector<vector<int>> freq(n+1);


        unordered_map <int, int> m;

        for (auto i : nums) m[i]++;

        for (auto i : m) freq[i.second].push_back(i.first);


        for (int i= freq.size()-1 ; i>=0 && k>0; i--){

            if (freq[i].size() != 0) {

                for (auto p : freq[i]) result.push_back(p);
                k-= freq[i].size();
            }
        }

        return result;

        

    }
};