class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        
        unordered_map <int , int> m;

        int mod = 1e9 + 7; 
        long long result = 0, sumofseg = 0;

        for (auto i : points){
            m[i[1]]+=1;
        }

        for (auto i: m){
            long long seg = (1LL * i.second * (i.second - 1) )/2;

            result += (seg * sumofseg);
            sumofseg += seg;

        }

        return result % mod;


    }
};