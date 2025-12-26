bool DFS(vector<vector<int>> &adjlist,vector <int> &visit, int i, int d){

    if (i == d) return true;

    visit[i] = 1;

    for (auto neighbour : adjlist[i]){

        if (neighbour == d) return true;

        if (!visit[neighbour]){
            visit[neighbour] = 1;

            if (DFS(adjlist, visit, neighbour, d) == true) return true;
        }


    } 

    return false;

}


class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        
        vector <int> visit (n);
        vector<vector<int>> adjlist(n);
        int e = edges.size();

        for (int i=0; i<e ; i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adjlist[u].push_back(v);
            adjlist[v].push_back(u);

        }

        return DFS(adjlist, visit,s, d);






    }
};