class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        int e = edges.size();

        vector<vector<int>> adjlist(n);
        vector<int> result;
        vector<int> indegree(n);

        queue<int> q;

        for (int i=0; i<e; i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adjlist[v].push_back(u);
            indegree[u]+=1;
        }

        for (int i=0; i<indegree.size(); i++){
            if (indegree[i] == 0) q.push(i);
        }

        while(!q.empty()){
            int node = q.front();  q.pop();
            result.push_back(node);

            for (auto neighbour : adjlist[node]){
                indegree[neighbour]-=1;

                if (indegree[neighbour] == 0) q.push(neighbour);
            }
        }

        if (result.size() != n) return {};

        return result ;
    }
};

