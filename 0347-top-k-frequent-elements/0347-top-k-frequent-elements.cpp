class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<vector<int>> bucket(nums.size()+1);
        unordered_map <int , int> m;
        vector<int> result;

        for (int  i : nums ) m[i]+=1;

        for (auto i : m){
            bucket[i.second].push_back(i.first);
        }

        for (int i= bucket.size()-1 ; i>=0; i--){
            int j = bucket[i].size()-1;

            while(k > 0 && j >= 0){
                result.push_back(bucket[i][j]);
                j--;
                k--;
            }

            if (k == 0) break;

        }

        return result;
    }
};