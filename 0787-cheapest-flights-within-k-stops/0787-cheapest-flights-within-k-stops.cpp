class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& edges, int src, int dst, int k) {
        
        vector<vector<pair<int,int>>> adjlist(n);

        vector<int> distance(n, INT_MAX);

        priority_queue<vector<int>, vector<vector<int>>, greater<> > q;

        for (int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int dist = edges[i][2];

            adjlist[u].push_back({v, dist});
        }
        //{stops , dist,  src}
        q.push({0,0,src});

        while (!q.empty()){
            auto v = q.top();   q.pop();
            int stops = v[0];
            int d     = v[1];
            int node  = v[2];

            //auto [stops , d, node] = q.top(); q.pop();
            //if (node == dst) return distance[node];
            //int newstop;

            for (auto neighbour : adjlist[node]){
                auto [adjnode , adjdist] = neighbour;

                if (stops == k+1) continue;
                //cout<<stops << "   "<< adjnode<<endl;

                if (d + adjdist < distance[adjnode]){
                    distance[adjnode] = d + adjdist;
                    q.push({stops +1 , distance[adjnode], adjnode});
                }
            }

        }

        if (distance[dst] == INT_MAX) return -1;
        return distance[dst];

        //return -1;






    }
};