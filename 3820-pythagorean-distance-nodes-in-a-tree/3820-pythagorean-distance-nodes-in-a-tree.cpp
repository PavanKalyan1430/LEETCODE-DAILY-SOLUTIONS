void BFS(vector<vector<int>> &adjlist, int node  , vector<int>&dist, int n){

    
    queue<int> q;
    int distance = 0; 

    vector<int> vis(n, 0);
    vis[node] = 1;
    q.push(node);
    dist[node] = 0;

    while(!q.empty()){
        distance +=1;

        int sz = q.size();

        for (int i=0; i<sz; i++){
            int ele = q.front(); q.pop();

            for (auto neighbour : adjlist[ele]){
                    
                 if (!vis[neighbour]){
                    q.push(neighbour);
                    vis[neighbour] = 1;
                    dist[neighbour] = distance;
                }
            }
        }
    }



}

class Solution {
public:
    int specialNodes(int n, vector<vector<int>>& edges, int x, int y, int z) {
        
        vector<vector<int>> adjlist (n);

        vector<int> distx(n,-1);
        vector<int> disty(n,-1);
        vector<int> distz(n,-1);

        for (int i =0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }

        
             BFS(adjlist ,  x, distx, n);
             BFS(adjlist ,  y, disty, n);
             BFS(adjlist ,  z, distz, n);
        

        // for (auto i : distx) cout<<i<<" ";
        // cout<<endl;

        // for (auto i : disty) cout<<i<<" ";
        // cout<<endl;

        // for (auto i : distz) cout<<i<<" ";

        int cnt = 0;

        for (int i = 0; i<n; i++){  
            vector <int> sol = {distx[i] , disty[i], distz[i]};

            sort(sol.begin(), sol.end());

            if (  ((1LL * sol[0] * sol[0]) + (1LL * sol[1] * sol[1])) == (1LL *sol[2] * sol[2])   ) cnt +=1;
        }

        return cnt;







    }
};