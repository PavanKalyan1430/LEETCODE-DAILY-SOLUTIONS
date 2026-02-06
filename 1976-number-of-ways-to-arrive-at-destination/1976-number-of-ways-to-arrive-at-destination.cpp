//#define mod = 1e9 + 7

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& edges) {

        const long long MOD = 1e9 + 7;
        vector<long long > distance (n,LLONG_MAX);
        vector<long long> dp(n,0);
        dp[0] = 1;

        priority_queue <pair<long long ,long long> , vector<pair<long long,long long>> , greater <>> q;

        vector<vector<pair<int,int>>> adjlist (n);

        for (int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int dist = edges[i][2];

            adjlist[u].push_back({v,dist});
            adjlist[v].push_back({u,dist});
        }

        q.push({0,0});

        while (!q.empty()){
            auto [d, node] = q.top(); q.pop();

            if (distance[node] < d) continue;

            for (auto neighbour : adjlist[node]){
                auto [adjnode, adjdist] = neighbour;

                if ( (0LL + d + adjdist) <= distance[adjnode]){

                    if (d + adjdist < distance[adjnode] ){
                        distance[adjnode] = d + adjdist;
                        dp[adjnode] = dp[node];
                        q.push({distance[adjnode], adjnode});
                    }

                    else dp[adjnode] = (dp[node] % MOD) + (dp[adjnode] % MOD);

                }
            }

        }

        //for (auto i : dp) cout<<i<<" ";

        return dp.back() % MOD;




    }
};