bool DFS(vector<vector<int>>&adjlist,vector<int>&visit, vector<int>&path, vector<int>&check,
        int node){

        visit[node] = 1;
        path[node] = 1;


        for (auto neighbour : adjlist[node]){

            if (!visit[neighbour]){
                if (DFS(adjlist, visit, path, check, neighbour) == false) return false;
            }

            else if (path[neighbour] == 1) return false;

        }

        path[node] = 0;
        check[node] = 1;

        return true;

}


class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    
        int v = graph.size();
        int e = v;

        vector<int>visit(v);
        vector<int>path(v);
        vector<int>check(v);

        bool ans;

        for (int i = 0; i<v; i++){
            if (!visit[i]){
                ans = DFS(graph, visit, path, check, i);
            }
        }

        vector<int> result;

        for (int i = 0; i<check.size(); i++){
            if (check[i] == 1) result.push_back(i);
        }

        return result;

    }
};