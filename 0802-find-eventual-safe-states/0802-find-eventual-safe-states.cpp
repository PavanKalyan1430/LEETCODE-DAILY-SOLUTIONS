bool DFS(vector<vector<int>> &adjlist , vector<int>&visit,
    vector<int>&check , vector<int>&path , int node){

        visit[node] = 1;
        path[node] = 1;

        for (auto neighbour : adjlist[node]){

            if (!visit[neighbour]){
                
                if (DFS(adjlist, visit, check , path , neighbour) == false) return false;

            }

            else if (visit[neighbour] == 1 && path[neighbour] == 1) return false;
        }

        path[node]= 0;
        check[node]= 1;
        return true;

}


class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n = graph.size();

        vector<int> check(n);
        vector<int> path(n);
        vector<int> visit(n);

        for (int i=0; i<n; i++){
            if (!visit[i]){
                DFS(graph, visit, check , path, i);
            }
        }

        vector<int> result;

        for (int i=0; i<check.size(); i++){
            if (check[i] == 1) result.push_back(i);
        }

        return result;


    }
};