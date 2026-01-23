class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        int n = words.size();

        vector<vector<string>> bucket(n+1);

        unordered_map <string , int> m;

        vector<string> result;

        for (auto i : words) m[i]+=1;

        for (auto i : m){
            bucket[i.second].push_back(i.first);
        }

        for (int i= bucket.size()-1 ; i>=0 && k>0; i--){
            
            sort(bucket[i].begin(), bucket[i].end());

            for (auto str : bucket[i]){

                if (k == 0) break;
                result.push_back(str);
                k--;
            }

        }

       
        return result;
    }
};