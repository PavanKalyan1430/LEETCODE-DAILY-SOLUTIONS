class Solution {
public:
    int networkDelayTime(vector<vector<int>>& edges, int n, int k) {
        
        //int n = edges.size();

        vector<int> distance(n+1, INT_MAX);

        vector<vector<pair<int , int>>> adjlist(n+1);

        for (int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int dist = edges[i][2];

            adjlist[u].push_back({v,dist});
        }

        //priority_queue<int , vector<int> , greater<> >

        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<>> q;
        
        //q.push( {dist , src })

        q.push({0, k});
        distance[k] = 0;

        while (!q.empty()){
            auto [d, node] = q.top(); q.pop();

           if (distance[node] < d) continue;

            for (auto neighbour : adjlist[node]){
                auto [adjnode , adjdist] = neighbour;

                if (distance[adjnode] > d + adjdist){
                    distance[adjnode] = d + adjdist;
                    q.push({distance[adjnode], adjnode});
                }
            }
        }

        int maxi = INT_MIN;

        //for (auto i : distance) cout<<i<<" ";
        

        for (int i=1; i<distance.size(); i++){
            if (distance[i] == INT_MAX) return -1;
            maxi = max(maxi , distance[i]);
        }

         
        return maxi;







    }
};