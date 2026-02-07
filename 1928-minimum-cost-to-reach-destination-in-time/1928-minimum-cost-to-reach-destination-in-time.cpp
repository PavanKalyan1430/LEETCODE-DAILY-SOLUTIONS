class Solution {
public:
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& fees) {

        
        int n = fees.size();
        vector<vector<pair<int,int>>> adjlist(n);

        vector<vector<int>> dp(n, vector<int>(maxTime + 1, INT_MAX));
        dp[0][0] = fees[0];

        for (int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int d = edges[i][2];

            adjlist[u].push_back({v,d}); 
            adjlist[v].push_back({u,d});
 
        }


        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>> , greater<> > q;

        q.push({fees[0], 0, 0});

        while (!q.empty()){
            auto [c,time,node] = q.top();  q.pop();

           // int c = v[0];   int time = v[1];    int node = v[2];

            if (node == n-1) return c;
            if (c > dp[node][time]) continue;




            for (auto neighbour : adjlist[node]){

                auto [adj_node, adj_time] = neighbour;

                int new_time = time + adj_time ;
                int new_cost = c + fees[adj_node];
                if (new_time > maxTime) continue;

                if (dp[adj_node][new_time] <= new_cost) continue;

                dp[adj_node][new_time] = new_cost;
                q.push({new_cost , new_time , adj_node});



            } 
        }

        return -1;

    }
};