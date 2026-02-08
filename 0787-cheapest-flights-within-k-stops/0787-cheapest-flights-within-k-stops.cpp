class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& edges, int src, int dst, int k) {

        vector<vector<int>> visit(n, vector<int>(k+2, -1));
        
        vector<vector<pair<int,int>>> adjlist(n);
        //vector<int> distance(n, INT_MAX);

    
    

        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>> , greater<> > q;

        for (int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int di = edges[i][2];

            adjlist[u].push_back({v,di});
        }

        //q.push({stops, distance , src})
        // we shoulos laways come from the min stops in our path journey cause if we prioritize on the basis of mindistance3 in pq we upadtes the distance[array] and this cuurent path may be invalid in future if they were more stops in btw 

        // BUT we might still have a path which takes more distance but less stops
        //  but the algo will not allow this path  if (dist + adjdist < distance[adjnode]) 
        // as previously we already updated the distance with minimum diatmce of that invalid path which has more stops


        //hence we always have to prioritize the state which was given in thw question (which is the stops here)

        q.push({0, 0, src});

        while(!q.empty()){
            auto [dist, stops,node] = q.top(); q.pop();

            if (node == dst) return dist;

            if (visit[node][stops] != -1 && visit[node][stops] < dist) continue;


            if (stops == k+1) continue;

            for (auto neighbour : adjlist[node]){
                auto [adjnode, adjdist] = neighbour;

                int new_dist = dist + adjdist;
                int new_stops = stops+1;

                if (visit[adjnode][new_stops] == -1 || visit[adjnode][new_stops] > new_dist){
                    visit[adjnode][new_stops]= new_dist;
                    q.push({new_dist, new_stops ,adjnode});
                }
            }
        }

        return -1;

        // if (distance[dst] == INT_MAX) return -1;
        // else return distance[dst];

    }
};