void DFS(vector<vector<int>>& adj, vector <int>& visit, int ind){

    if (visit[ind]) return;

    visit[ind] = 1;

    for (auto i : adj[ind]){
        // if (!visit[i]){
            DFS(adj, visit, i);
        //}
    }

}



class Solution {
public:
    int findCircleNum(vector<vector<int>>& mat) {
        
        int count = 0;

        int r  = mat.size();
        int c = mat[0].size();

        vector<vector<int>> adj(r);

        vector<int> visit(r, 0);

        for (int i=0; i<r; i++){
            for (int j = 0; j<c; j++){
                if (i != j && mat[i][j] == 1){
                    adj[i].push_back(j);
                }
            }
        }



        for (int i=0; i<visit.size(); i++){
            if (visit[i] == 0){
                count += 1;
                DFS(adj,visit, i);
            }
        }

        return count;
    }
};