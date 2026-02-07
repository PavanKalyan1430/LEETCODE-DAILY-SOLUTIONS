class Solution {
public:
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& Fees) {
        
        // int rows = grid.size();
        // int cols = grid[0].size();

        int n = Fees.size();
        vector<vector<pair<int,int>>> adjlist(n);
        unordered_map <int ,int> t;

        for (int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int d = edges[i][2];

            adjlist[u].push_back({v,d});
            adjlist[v].push_back({u,d});
        }

    
        

       priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> q;
        // q.push(cost, time , node);
        q.push({Fees[0],0,0});

        while (!q.empty()){
            auto [c , time , node] = q.top();
            q.pop();

            if (node == n-1) return c;


            for (auto neighbour : adjlist[node]){
                auto [adjnode, adjtime] = neighbour;

                int new_time = time + adjtime;

                if (new_time  > maxTime) continue;

                int new_cost = c + Fees[adjnode];

                if (!t.count(adjnode) ||  t[adjnode] > new_time ){
                    t[adjnode] = new_time;
                    q.push({new_cost , new_time , adjnode});
                }
            }
                

        }
      
         return -1;
    }
};