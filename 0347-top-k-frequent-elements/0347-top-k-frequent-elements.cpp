class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>, vector<pair<int,int>>> q;
        vector<int> result;
        unordered_map <int, int> m;

        for (int i : nums) m[i]++;


        for (auto i : m){
            q.push({i.second,i.first});
        }

        while(k>0){
            result.push_back(q.top().second);
            q.pop();
            k--;
        }

        return result;

    }
};