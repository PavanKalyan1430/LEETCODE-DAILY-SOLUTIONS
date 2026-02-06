class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& edges, int src, int dst, int k) {

        
        vector<vector<pair<int,int>>> adjlist(n);
        vector<int> distance(n, INT_MAX);


        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>> , greater<> > q;

        for (int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int di = edges[i][2];

            adjlist[u].push_back({v,di});
        }

        //q.push({stops, distance , src})
        q.push({0, 0, src});

        while(!q.empty()){
            auto [stops, dist,  node] = q.top(); q.pop();

            if (stops == k+1) continue;

            for (auto neighbour : adjlist[node]){
                auto [adjnode, adjdist] = neighbour;

                if (dist + adjdist < distance[adjnode]){
                    distance[adjnode]= dist + adjdist;
                    q.push({stops+1, distance[adjnode], adjnode});
                }
            }
        }

        if (distance[dst] == INT_MAX) return -1;
        else return distance[dst];

    }
};