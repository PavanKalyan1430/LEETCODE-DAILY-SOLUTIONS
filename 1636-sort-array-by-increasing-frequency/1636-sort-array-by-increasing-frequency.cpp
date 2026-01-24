class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        vector<int> result;

        unordered_map <int , int> m;
        for (int i : nums) m[i]+=1;

        int n = nums.size();
        vector<vector<int>> bucket(n+1);

        for (auto i : m){
            bucket[i.second].push_back(i.first);
        }

        for (int i=1; i<bucket.size(); i++){
            sort(bucket[i].rbegin(), bucket[i].rend());

            for (int j = 0; j<bucket[i].size(); j++){
                int k = i;

                while( k > 0){
                    result.push_back(bucket[i][j]);
                    k-=1;
                }

            }
        }

        return result;


    }
};